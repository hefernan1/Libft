/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 22:06:44 by hefernan          #+#    #+#             */
/*   Updated: 2020/08/14 13:31:14 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  size_t i;
  size_t n;
  size_t len;

  n = 0;
  i = 0;
  len = ft_strlen(dst) + ft_strlen(src);
  while (dst[i])
    i++;
  while (src[n] && n + 1 < dstsize)
  {
    dst[i] = src[n];
    n++;
    i++;
  }
  if (dstsize != 0)
    dst[i] = '\0';
  return (len);
}

int main(void)
{
  char tab[15] = "";
  char tab1[10] = "henrique";

  printf("%lu\n", ft_strlcat(tab, tab1, 4));
  printf("%lu\n", strlcat(tab, tab1, 4));
}
