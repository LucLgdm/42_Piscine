/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:47:13 by marvin            #+#    #+#             */
/*   Updated: 2024/09/20 19:47:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_btree
{
    void            *item;
    struct s_btree  *left;
    struct s_btree  *right;
} t_btree;

typedef struct s_queue {
	t_btree	*node;
	int		level;
	struct s_queue *next;
}	t_queue;

void    enqueue(t_queue **head, t_btree *node, int level);
void    dequeue(t_queue **head);
