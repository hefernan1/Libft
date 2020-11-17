/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 01:04:53 by hefernan          #+#    #+#             */
/*   Updated: 2020/08/13 15:03:45 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    size_t i;
    size_t len;
    char *str;

    i = 0;
    len = ft_strlen(s1);
    if(!(str = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (s1[i])
    {
        str[i] = (char)s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int     main(void)
{
    char str[20] = "henrique";

    printf("%s\n", ft_strdup(str));
    printf("%s\n", strdup(str));
}
