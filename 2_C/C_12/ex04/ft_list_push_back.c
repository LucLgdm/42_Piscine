/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:25:45 by marvin            #+#    #+#             */
/*   Updated: 2024/08/08 17:25:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_push_back(t_list **begin_list, void *data)
{
    t_list  *temp;
    t_list  *new;

    new = ft_create_elem(data);
    if (!new)
        return;
    if(*begin_list == NULL)
        *begin_list = new;
    else
    {
        temp = *begin_list;
        while(temp->next)
            temp = temp->next;
        temp->next = new;
    }
}
