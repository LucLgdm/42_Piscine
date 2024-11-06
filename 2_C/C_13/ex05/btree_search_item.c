/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:37:41 by marvin            #+#    #+#             */
/*   Updated: 2024/09/20 20:37:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
    void    *result;

    if (!root)
        return (NULL);  
    if (cmpf(root->item, data_ref) == 0)
        return (root);
    result = btree_search_item(root->left, data_ref, cmpf);
    if(result)
        return result;       
    return (btree_search_item(root->right, data_ref, cmpf));
}
