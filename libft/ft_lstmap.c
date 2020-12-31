/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:01:03 by hefernan          #+#    #+#             */
/*   Updated: 2020/12/22 17:02:08 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**debut;
	t_list	*tmp;
	t_list	*tmp2;

	if (!(debut = (t_list **)malloc(sizeof(t_list))))
		return (NULL);
	if (!(lst) || !(*debut = ft_lstnew(f(lst->content))) || f == NULL)
		return (NULL);
	lst = lst->next;
	tmp = *debut;
	while (lst)
	{
		tmp2 = tmp;
		if (!(tmp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(debut, del);
			return (NULL);
		}
		tmp2->next = tmp;
		lst = lst->next;
	}
	tmp->next = NULL;
	return (*debut);
}
