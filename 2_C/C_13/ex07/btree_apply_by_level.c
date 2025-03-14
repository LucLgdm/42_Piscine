/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:57:30 by marvin            #+#    #+#             */
/*   Updated: 2024/09/20 20:57:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>


void enqueue(t_queue **head, t_btree *node, int level) {
    if (!node) return;
    
    t_queue *new = malloc(sizeof(t_queue));
    if (!new) return;

    new->node = node;
    new->level = level;
    new->next = NULL;

    if (!*head) {
        *head = new;
    } else {
        t_queue *tmp = *head;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new;
    }
}


void dequeue(t_queue **head) {
    if (!head || !*head) return;
    
    t_queue *tmp = *head;
    *head = (*head)->next;
    free(tmp);
}


void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (!root)
		return ;
	
	t_queue *queue = NULL;
	enqueue(&queue, root, 0);
	int current_level = 0;
	int is_first_elem = 1;

	while (queue) {
		t_btree *node = queue->node;
		int level = queue->level;
		dequeue(&queue);
	
		if (level > current_level) {
			current_level = level;
			is_first_elem = 1;
		}
	
		applyf(node->item, level, is_first_elem);
		is_first_elem = 0;
	
		if (node->left)
			enqueue(&queue, node->left, level + 1);
		if (node->right)
			enqueue(&queue, node->right, level + 1);
	}
	
}

void print_node(void *item, int level, int is_first_elem) {
	printf("Node: %s, Level: %d, First: %d\n", (char *)item, level, is_first_elem);
}

int main() {
	t_btree a = {(void *)"A", NULL, NULL};
	t_btree b = {(void *)"B", NULL, NULL};
	t_btree c = {(void *)"C", NULL, NULL};
	t_btree d = {(void *)"D", NULL, NULL};
	t_btree e = {(void *)"E", NULL, NULL};
	t_btree f = {(void *)"F", NULL, NULL};

	a.left = &b;
	a.right = &c;
	b.left = &d;
	b.right = &e;
	c.right = &f;

	btree_apply_by_level(&a, print_node);
	return 0;
}
