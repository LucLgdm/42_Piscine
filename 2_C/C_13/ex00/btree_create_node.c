/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:48:48 by marvin            #+#    #+#             */
/*   Updated: 2024/09/20 19:48:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

t_btree *btree_create_node(void *item)
{
    t_btree *new;

    if (item = NULL)
        return (NULL);  
    new = (t_btree*)malloc(sizeof(t_btree));
    if(!new)
        return (NULL);
    new->item = item;
    new->left = NULL;
    new->right = NULL;
    return (new);
}
