/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:36:43 by marvin            #+#    #+#             */
/*   Updated: 2024/09/06 12:36:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    t_list  *temp;

    temp = begin_list;
    while(temp)
    {
        if((*cmp)(temp->data, data_ref) == 0)
            return (temp);
        temp = temp->next;
    }
    return (NULL);
}
