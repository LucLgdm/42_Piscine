/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:23:53 by marvin            #+#    #+#             */
/*   Updated: 2024/08/01 14:23:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int n)
{
	long nn = n;
	if (n < 0)
	{
		nn = -nn;
		printf("-");
	}
	if (n > 9){
		ft_putnbr(nn / 10);
		ft_putnbr(nn % 10);
	}else{
		printf("%d", nn);
	}
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = -1;
	while (++i < length)
	{
		f(tab[i]);
		printf(" ");
	}
}

int main()
{
	int	tab[10] = {15, 26, 85, -45632, 50, 20, 40, 65, 89, 63};
	ft_foreach(tab, 10, &ft_putnbr);
	return 0;
}
