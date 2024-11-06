/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:13:02 by marvin            #+#    #+#             */
/*   Updated: 2024/08/08 17:13:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int cpt;
    t_list  *temp;

    cpt = 0;
    temp = begin_list;
    while(temp)
    {
        cpt++;
        temp = temp->next;
    }
    return (cpt);
}
