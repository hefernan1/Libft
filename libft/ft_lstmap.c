/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:01:03 by hefernan          #+#    #+#             */
/*   Updated: 2020/12/03 16:57:01 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *tmp;
    t_list *tmp2;

    tmp = lst;
    if (!(lst = malloc(sizeof(t_list))))
        return (NULL);
    if (!lst)
        return ;
    while (tmp)
    {

    }
}
