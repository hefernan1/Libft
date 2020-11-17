/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 21:48:26 by hefernan          #+#    #+#             */
/*   Updated: 2020/08/17 15:51:11 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   ft_bzero(void *s, size_t n)
{
  size_t i;
  char *s1;

  s1 = s;
  i = 0;
  while (i < n)
  {
    s1[i] = 0;
    i++;
  }
}

int main(void)
{
  char tab[50] = "liseaaaaaa";

  ft_bzero(tab, 30);
  printf("%s", tab);
}
