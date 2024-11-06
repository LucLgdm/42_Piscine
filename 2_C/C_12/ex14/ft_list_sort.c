/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:20:34 by marvin            #+#    #+#             */
/*   Updated: 2024/09/11 12:20:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void    ft_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list  *sorted;
    t_list  *current;
    t_list  *next;

    current = *begin_list;
    while(current)
    {
        next = current->next;
        ft_sorted_insert(&sorted, current, cmp);
        current = next;
    }
    *begin_list = sorted;
}

void    ft_sorted_insert(t_list **sorted, t_list *new_elem, int (*cmp)())
{
    t_list *current;

    if (!*sorted || (*cmp)(new_elem->data, (*sorted)->data) < 0)
    {
        new_elem->next = *sorted;
        *sorted = new_elem;
    }
    else
    {
        current = *sorted;
        while(current->next && (*cmp)(new_elem->data, current->next->data) >= 0)
            current = current->next;
        new_elem->next = current->next;
        current->next = new_elem;
    }
}
