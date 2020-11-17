/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:37:59 by hefernan          #+#    #+#             */
/*   Updated: 2020/08/10 01:05:47 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
  size_t i;
  char *src2;
  char *dst2;

  i = 0;
  dst2 = dst;
  src2 = (void *)src;
  while (i < n)
  {
    dst2[i] = src2[i];
    i++;
    if (src2[i - 1] == c)
      return (dst + i);
  }
  return (NULL);
}
