/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 11:03:42 by hefernan          #+#    #+#             */
/*   Updated: 2020/12/17 18:10:41 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			compt_nb(int nb)
{
	long int		nbr;
	int				i;

	i = 0;
	nbr = nb;
	if (nbr == 0)
		i = 1;
	if (nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	long int		nbr;
	int				i;
	char			*str;
	int				len;

	nbr = n;
	i = 0;
	len = compt_nb(n);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		str[len - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (str);
}
