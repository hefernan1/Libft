/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:22:58 by hefernan          #+#    #+#             */
/*   Updated: 2020/11/20 15:27:25 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list  *tmp;

    tmp = lst;
    i = 0;
    while (tmp)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}
