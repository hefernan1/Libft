/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:37:59 by hefernan          #+#    #+#             */
/*   Updated: 2020/12/28 00:51:05 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	if (!dst && !src)
		return (dst);
	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dst;
	i = -1;
	while (++i < n && s1[i] != (unsigned char)c)
	{
		s2[i] = (unsigned char)s1[i];
	}
	if (s1[i] == (unsigned char)c)
	{
		s2[i] = (unsigned char)s1[i];
		return (&dst[i + 1]);
	}
	return (NULL);
}
