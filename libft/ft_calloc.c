/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 14:08:33 by hefernan          #+#    #+#             */
/*   Updated: 2020/12/28 01:11:24 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	if (!(tab = malloc(count * size)))
		return (NULL);
	ft_bzero(tab, count * size);
	return (tab);
}
