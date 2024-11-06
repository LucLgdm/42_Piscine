/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:46:59 by marvin            #+#    #+#             */
/*   Updated: 2024/09/20 20:46:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

int btree_level_count(t_btree *root)
{
    int left_height;
    int right_height;

    if (!root)
        return (0);
    left_height = btree_level_count(root->left);
    right_height = btree_level_count(root->right);

    return (1 + (left_height > right_height ? left_height : right_height));
}
