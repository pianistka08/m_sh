/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassunta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:30:58 by cassunta          #+#    #+#             */
/*   Updated: 2019/09/29 18:15:23 by cassunta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int			i;
	int			loc;

	i = 0;
	while (s1[i] != '\0')
	{
		loc = 0;
		if (s1[i] == s2[loc])
		{
			while (s1[i + loc] == s2[loc] && s2[loc])
			{
				loc++;
			}
			if (s2[loc] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	if (s2[0] == '\0')
		return ((char *)&s1[0]);
	return (NULL);
}
