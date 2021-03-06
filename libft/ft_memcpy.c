/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:29:18 by hefernan          #+#    #+#             */
/*   Updated: 2020/12/28 00:23:55 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	i = 0;
	dst2 = dst;
	src2 = (void *)src;
	if (!(dst || src))
		return (NULL);
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
