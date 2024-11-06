/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:28:20 by marvin            #+#    #+#             */
/*   Updated: 2024/09/06 12:28:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list  *temp;

    temp = begin_list;
    while(temp)
    {
        (*f)(temp->data);
        temp = temp->next;
    }
}
