/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 22:07:00 by hefernan          #+#    #+#             */
/*   Updated: 2020/08/10 01:07:01 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
  size_t i;
  size_t len;

  i = 0;
  len = ft_strlen(src);
  while (src[i] && i + 1 < dstsize)
  {
    dst[i] = src[i];
    i++;
  }
  if (dstsize != 0)
    dst[i] = '\0';
  return (len);
}

int main(void)
{
  char tab[50] = "";
  char tab1[50] = "dsjkdffdgdfgfdgfdfggfqsddsqdqjdsjd";

  printf("%lu\n", ft_strlcpy(tab, tab1, 9));
  printf("%lu\n", strlcpy(tab, tab1, 9));
  printf("%s", tab);
}
