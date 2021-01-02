/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:37:59 by hefernan          #+#    #+#             */
/*   Updated: 2021/01/02 15:30:09 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	if (!n)
		return (0);
	d = (unsigned char *)dst;
	*d = *s++;
	while (*d++ != (unsigned char)c && --n)
		*d = *s++;
	if (*(d - 1) == (unsigned char)c)
		return ((void *)d);
	return (0);
}
