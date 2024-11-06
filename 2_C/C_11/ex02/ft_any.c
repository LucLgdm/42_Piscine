/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:02:44 by marvin            #+#    #+#             */
/*   Updated: 2024/08/01 15:02:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_is_numeric(char *str)
{
    int i;

    i = -1;
    while (str[++i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            return (42);
    }
    return (0);
}

int ft_any(char **tab, int(*f)(char *))
{
    int i;

    i = -1;
    while (tab[++i])
    {
        if (f(tab[i]) != 0)
            return (1);
    }
    return (0);
}

int main()
{
    char    **tab;
    int i;
    int size1;
    int size2;

    size1 = 5;
    size2 = 3;
    tab = (char **)malloc(size1 * sizeof(char *));
    if (tab == NULL)
    {
        printf("malloc error");
        return (0);
    }
    i = -1;
    while (++i < size1)
    {
        tab[i] = (char *)malloc(size2 * sizeof(char));
        if (tab[i] == NULL)
        {
            printf("malloc error");
            return (0);
        }
    }

    tab[0] = "abv";
    tab[1] = "avb";
    tab[2] = "acd";
    tab[3] = "azz";
    tab[4] = "rrr";
    printf("%d", ft_any(tab, &ft_is_numeric));
    while (--i)
        free(tab[i]);
    free(tab);
    return (0);
}
