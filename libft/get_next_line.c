/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassunta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:53:41 by cassunta          #+#    #+#             */
/*   Updated: 2020/02/25 01:37:34 by cassunta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	put_in_line(char *file[], char **line, int fd, int len)
{
	char		*tmp;
	size_t		i;

	i = 0;
	while (file[fd][i] != '\n' && file[fd][i] != '\0')
		i++;
	if (file[fd][i] == '\n')
	{
		*line = ft_strsub(file[fd], 0, i);
		tmp = ft_strdup(file[fd] + i + 1);
		free(file[fd]);
		file[fd] = tmp;
		if (file[fd][0] == '\0')
			ft_strdel(&file[fd]);
	}
	else if (file[fd][i] == '\0')
	{
		if (len == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(file[fd]);
		ft_strdel(&file[fd]);
	}
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	static char		*file[9999];
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	int				len;

	if (fd < 0 || !line)
		return (-1);
	while ((len = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[len] = '\0';
		if (file[fd] == NULL)
			file[fd] = ft_strnew(0);
		tmp = ft_strjoin(file[fd], buf);
		free(file[fd]);
		file[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (len < 0)
		return (-1);
	else if (len == 0 && (file[fd] == NULL || file[fd][0] == '\0'))
		return (0);
	return (put_in_line(file, line, fd, len));
}
