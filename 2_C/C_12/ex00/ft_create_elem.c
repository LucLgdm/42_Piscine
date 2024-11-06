/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:57:43 by marvin            #+#    #+#             */
/*   Updated: 2024/08/08 16:57:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list  *ft_create_elem(void *data)
{
    t_list  *new;
    new = (t_list*)malloc(sizeof(t_list));
    if(!new)
        return (NULL);
    new->data = data;
    new->next = NULL;
    return (new);
}
