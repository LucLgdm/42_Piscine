/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:06:03 by marvin            #+#    #+#             */
/*   Updated: 2024/08/08 17:06:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list  *new;
    new = ft_create_elem(data);
    if(!new)
        return;
    new->next = *begin_list;
    *begin_list = new;
}
