/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 18:14:32 by hefernan          #+#    #+#             */
/*   Updated: 2020/08/08 14:47:15 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  size_t i;
  size_t l;

  i = 0;
  if (needle[i] == '\0')
    return ((char *)haystack);
  while (haystack[i] && i < len)
  {
    l = 0;
    while (haystack[i + l] == needle[l] && i + l < len)
    {
      if (needle[l + 1])
        return ((char *)&haystack[i]);
      l++;
    }
    i++;
  }
  return (NULL);
}

int main(void)
{
  char tab[50] = "foo bar foo";
  char tab2[50] = "bar";

  printf("%s\n", ft_strnstr(tab, tab2, 10));
  printf("%s\n", strnstr(tab, tab2, 10));
}
