/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:17:29 by marvin            #+#    #+#             */
/*   Updated: 2024/08/08 19:17:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void    ft_list_clear(t_list **begin_list, void (*free_fct)(void *))
{
    t_list  *temp;

    while(*begin_list)
    {
        temp = *begin_list;
        *begin_list = (*begin_list)->next;
        free_fct(temp->data);
        free(temp);
    }
}
