/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassunta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 15:20:39 by cassunta          #+#    #+#             */
/*   Updated: 2019/09/27 23:09:42 by cassunta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_c;
	char	*src_c;
	size_t	i;

	dst_c = (char *)dst;
	src_c = (char *)src;
	i = 0;
	if (!dst && !src && len)
		return (NULL);
	if (dst_c < src_c)
	{
		while (i < len)
		{
			dst_c[i] = src_c[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			dst_c[len] = src_c[len];
		}
	}
	return (dst);
}
