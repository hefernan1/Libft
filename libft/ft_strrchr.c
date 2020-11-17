/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:56:42 by hefernan          #+#    #+#             */
/*   Updated: 2020/08/09 21:39:48 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strrchr(const char *s, int c)
{
  size_t i;

  i = ft_strlen(s);
  while (i != 0)
  {
    if (s[i] == c)
     return ((char *)&s[i]);
    i--;
  }
  if (s[i] == c)
    return ((char *)&s[i]);
  return (NULL);
}
