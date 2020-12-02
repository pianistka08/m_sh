/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassunta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:45:57 by cassunta          #+#    #+#             */
/*   Updated: 2020/02/22 18:46:40 by cassunta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		print(char **arr)
{
	int		i;

	if (arr == NULL)
	{
		return ;
	}
	i = 0;
	while (arr[i] != 0)
	{
		ft_putendl(arr[i]);
		i++;
	}
}
