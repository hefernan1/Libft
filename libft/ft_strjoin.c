/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 18:07:23 by hefernan          #+#    #+#             */
/*   Updated: 2020/11/20 16:44:33 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcpy(char *dst, const char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char    *ft_strcat(char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i])
        i++;
    while (s2[j])
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return (s1);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int len;

    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    if(!(str = malloc(sizeof(char) * len)))
        return (NULL);
    ft_strcpy(str, s1);
    ft_strcat(str, s2);
    return (str);
}

int     main(void)
{
    char s1[15] = "henrique";
    char s2[15] = "aaaaaa";

    printf("%s\n", ft_strjoin(s1, s2));
}
