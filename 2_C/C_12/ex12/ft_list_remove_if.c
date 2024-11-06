/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:31:24 by marvin            #+#    #+#             */
/*   Updated: 2024/09/11 11:31:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list  *current;
    t_list  *prev;
    t_list  *temp;

    current = *begin_list;
    prev = NULL;
    temp = NULL;
    while(current)
    {
        if ((*cmp)(current->data, data_ref) == 0)
        {
            temp = current;
            if (prev = NULL)
                *begin_list = current->next;
            else
                prev->next = current->next;
            current = current->next;
            (*free_fct)(temp->data);
            free(temp);
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
}
