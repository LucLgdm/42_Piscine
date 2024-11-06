/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:09:21 by marvin            #+#    #+#             */
/*   Updated: 2024/09/11 12:09:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *temp;

    if(!*begin_list1)
    {
        *begin_list1 = begin_list2;
        return;
    }
    temp = *begin_list1;
    while(temp)
        temp = temp->next;
    temp->next = begin_list2;
}
