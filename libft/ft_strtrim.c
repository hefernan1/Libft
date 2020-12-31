/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 00:10:06 by hefernan          #+#    #+#             */
/*   Updated: 2020/12/28 17:55:52 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intermilan(char c, char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		dubut;
	int		fin;

	dubut = 0;
	if (!s1 || !set)
		return (NULL);
	fin = ft_strlen(s1);
	while (intermilan(s1[dubut], (char *)set) >= 0)
		dubut++;
	if ((fin - dubut) <= 0)
		return (ft_substr(s1, 0, 0));
	while (intermilan(s1[fin - 1], (char *)set) >= 0)
		fin--;
	return (ft_substr(s1, dubut, fin - dubut));
}
