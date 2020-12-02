/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassunta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:43:30 by cassunta          #+#    #+#             */
/*   Updated: 2019/09/30 04:27:48 by cassunta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (ft_strlen((char *)s1) == 0)
		return (NULL);
	if (ft_strlen((char *)s2) == 0)
		return ((char *)s1);
	i = 0;
	while ((s1 != '\0') && (i < n))
	{
		if (s1[i] == s2[0])
		{
			j = 1;
			while ((s2[j] != '\0') && (s1[i + j] == s2[j]) && (i + j < n))
				j++;
			if (s2[j] == '\0')
				return ((char*)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
