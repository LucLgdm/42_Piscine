/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:07:08 by marvin            #+#    #+#             */
/*   Updated: 2024/09/20 19:07:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

    void    ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
    {
        t_list  *new;
        t_list  *current;

        new = ft_create_elem(data);
        current = *begin_list;
        if (!*begin_list || (*cmp)(new->data, (*begin_list)->data) < 0)
        {
            new->next = *begin_list;
            *begin_list = new;
            return; 
        }
        while(current->next)
        {
            if ((*cmp)(new->data, current->next->data) > 0)
            {
                new->next = current->next;
                current->next = new;
                return;
            }
            current = current->next;
        }
    }
