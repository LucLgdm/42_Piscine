/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:30:05 by marvin            #+#    #+#             */
/*   Updated: 2024/09/20 20:30:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
    if (!(*root))
        *root = btree_create_node(item);
    else
    {
        if (cmpf(item, (*root)->item) < 0)
            btree_insert_data(&((*root)->left), item, cmpf);
        else
            btree_insert_data(&(*root)->right, item, cmpf);
    }
}
