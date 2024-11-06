/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:03:10 by marvin            #+#    #+#             */
/*   Updated: 2024/08/08 16:03:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = -1;
	while(++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
	}
	return (1);
}
int ascending_order(int a, int b)
{
    return (a - b);
}

int descending_order(int a, int b)
{
    return (b - a);
}

int main(void)
{
    int tab1[] = {1, 2, 3, 4, 5};
    int tab2[] = {5, 4, 3, 2, 1};
    int tab3[] = {1, 3, 2, 4, 5};
    int length1 = sizeof(tab1) / sizeof(tab1[0]);
    int length2 = sizeof(tab2) / sizeof(tab2[0]);
    int length3 = sizeof(tab3) / sizeof(tab3[0]);

    // Tester avec la fonction de comparaison pour ordre croissant
    printf("tab1 est trie en ordre croissant: %d\n", ft_is_sort(tab1, length1, &ascending_order));
    printf("tab2 est trie en ordre croissant: %d\n", ft_is_sort(tab2, length2, &ascending_order));
    printf("tab3 est trie en ordre croissant: %d\n", ft_is_sort(tab3, length3, &ascending_order));

    // Tester avec la fonction de comparaison pour ordre décroissant
    printf("tab1 est trie en ordre decroissant: %d\n", ft_is_sort(tab1, length1, &descending_order));
    printf("tab2 est trie en ordre decroissant: %d\n", ft_is_sort(tab2, length2, &descending_order));
    printf("tab3 est trie en ordre decroissant: %d\n", ft_is_sort(tab3, length3, &descending_order));

    return 0;
}
