/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:18:06 by marvin            #+#    #+#             */
/*   Updated: 2024/08/08 17:18:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *ft_list_last(t_list *begin_list)
{
    t_list *temp;

    if (begin_list == NULL)
        return (NULL);
    temp = begin_list;
    while(temp->next)
        temp = temp->next;
    return (temp);
}
