/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:06:14 by hefernan          #+#    #+#             */
/*   Updated: 2020/11/20 16:11:47 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list *tmp;

    tmp = lst;
    if(!(lst = malloc(sizeof(t_list))))
        return(NULL);
    while (tmp)
    {
        tmp = tmp->next;
    }
    return (tmp);
}
