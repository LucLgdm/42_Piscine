/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:48:58 by marvin            #+#    #+#             */
/*   Updated: 2024/08/01 14:48:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int dooble(int n)
{
    return (2 * n);
}

int *ft_map(int *tab, int length, int (*f)(int))
{
    int *output;
    int i;

    output = (int *)malloc(length * sizeof(int));
    i = -1;
    while (++i < length)
    {
        output[i] = f(tab[i]);
    }
    return (output);
}

int main()
{
    int *output;
    int *tab;
    int length;
    int i;

    length = 15;
    tab = (int *)malloc(length * sizeof(int));
    i = -1;
    while (++i < length)
    {
        tab[i] = i + 3;
        printf("%d", tab[i]);
        if (i != length - 1)
            printf(" ");
    }
    printf("\n");
    output = ft_map(tab, length, &dooble);
    i = -1;
    while (++i < length)
    {
        printf("%d", output[i]);
        if (i != length - 1)
            printf(" ");
    }
    free(output);
    free(tab);
}
