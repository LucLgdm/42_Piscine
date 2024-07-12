/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 07:31:04 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/27 07:52:49 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h> */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	v_temp;

	i = 0;
	while (i < size / 2)
	{
		v_temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = v_temp;
		i++;
	}
}

/*
int	main()
{
	int	size = 5;
	int	tab[] = {0, 1, 2, 3, 4};
	for (int i = 0; i < size; i++)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
	}	
	
	ft_rev_int_tab(tab, size);
	printf("\n");
	for(int i = 0; i < size; i++)
	{
		printf("tb[%d] = %d\n", i, tab[i]);
	}
	return 0;
}*/
