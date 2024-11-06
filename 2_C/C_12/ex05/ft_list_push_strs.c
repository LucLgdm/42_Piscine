/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:44:30 by marvin            #+#    #+#             */
/*   Updated: 2024/08/08 17:44:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list  *ft_list_push_strs(int size, char **strs)
{
    t_list *output;
    t_list *new;
    int i;

    i = 0;
    output = NULL;
    while (--size >= 0)
    {
        new = ft_create_elem(strs[size]);
        if(!new)
            return (NULL);
        new->next = output;
        output = new;
    }
    return (output);
}
void print_list(t_list *list)
{
    while (list)
    {
        printf("%s\n", (char *)list->data);
        list = list->next;
    }
}
int main(void)
{
    char *strs[] = {"Hello", "World", "from", "ft_list_push_strs"};
    int size = sizeof(strs) / sizeof(strs[0]);
    t_list *list;
    int i;

    list = ft_list_push_strs(size, strs);

    if (list == NULL)
    {
        printf("Failed to create list.\n");
        return (1);
    }

    printf("List elements:\n");
    print_list(list);

    t_list *temp;
    while (list)
    {
        temp = list;
        list = list->next;
        free(temp);
    }

    return (0);
}
