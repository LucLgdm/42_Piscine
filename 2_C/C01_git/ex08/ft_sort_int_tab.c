/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 07:53:30 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/27 08:42:48 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_swap(int *a, int *b)
{
	int	v_temp;

	v_temp = *a;
	*a = *b;
	*b = v_temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}
/*
int	main()
{
	int tab[] = {0, 1, 25, 32, 2, -5};
	for(int i = 0; i < 6; i++){
		printf("%d, ", tab[i]);
	}
	
	ft_sort_int_tab(tab, 6);
	
	printf("\n");
	for(int i = 0; i < 6; i++){
		printf("%d, ", tab[i]);
	}
	
	return 0;
}*/
