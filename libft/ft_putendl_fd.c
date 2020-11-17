/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hefernan <hefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 19:38:39 by hefernan          #+#    #+#             */
/*   Updated: 2020/08/10 01:05:05 by hefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   ft_putendl_fd(char *s, int fd)
{
  ft_putstr_fd(s, fd);
  ft_putchar_fd('\n', fd);
}
