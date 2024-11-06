/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 09:57:04 by marvin            #+#    #+#             */
/*   Updated: 2024/08/11 09:57:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list  *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list          *temp;
    unsigned int    i;

    i = 0;
    temp = begin_list;
    while(temp && i < nbr)
    {
        temp = temp->next;
        i++;
    }
    return (temp);
}

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
int main()
{
    // Création d'éléments de la liste
    t_list *list = ft_create_elem("Element 1");
    list->next = ft_create_elem("Element 2");
    list->next->next = ft_create_elem("Element 3");
    list->next->next->next = ft_create_elem("Element 4");

    // Test 1: Récupérer le premier élément (index 0)
    t_list *elem = ft_list_at(list, 0);
    if (elem && elem->data)
        printf("Test 1 (index 0): %s\n", (char *)elem->data);
    else
        printf("Test 1 (index 0) failed!\n");

    // Test 2: Récupérer le deuxième élément (index 1)
    elem = ft_list_at(list, 1);
    if (elem && elem->data)
        printf("Test 2 (index 1): %s\n", (char *)elem->data);
    else
        printf("Test 2 (index 1) failed!\n");

    // Test 3: Récupérer le quatrième élément (index 3)
    elem = ft_list_at(list, 3);
    if (elem && elem->data)
        printf("Test 3 (index 3): %s\n", (char *)elem->data);
    else
        printf("Test 3 (index 3) failed!\n");

    // Test 4: Récupérer un élément inexistant (index 5)
    elem = ft_list_at(list, 5);
    if (!elem)
        printf("Test 4 (index 5): NULL (correct)\n");
    else
        printf("Test 4 (index 5) failed!\n");

    // Libération de la mémoire (à faire proprement dans un vrai projet)
    free(list->next->next->next);
    free(list->next->next);
    free(list->next);
    free(list);
    return (0);
}