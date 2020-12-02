/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassunta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:37:30 by cassunta          #+#    #+#             */
/*   Updated: 2019/09/25 22:17:03 by cassunta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*m_str;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	m_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (m_str == NULL)
		return (NULL);
	while (s[i])
	{
		m_str[i] = f(s[i]);
		i++;
	}
	m_str[i] = '\0';
	return (m_str);
}
