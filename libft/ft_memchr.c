/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassunta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 22:41:44 by cassunta          #+#    #+#             */
/*   Updated: 2019/09/30 07:02:14 by cassunta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	const char		*str;

	str = (const char *)s;
	count = -1;
	while (++count < n)
	{
		if (*(str + count) == (char)c)
			return ((void *)s + count);
	}
	return (NULL);
}
