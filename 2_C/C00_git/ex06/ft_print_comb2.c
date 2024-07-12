/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:51:55 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/26 11:51:59 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write('0' + a / 10);
			ft_write('0' + a % 10);
			ft_write(' ');
			ft_write('0' + b / 10);
			ft_write('0' + b % 10);
			if (!(a == 98 && b == 99))
			{
				ft_write(',');
				ft_write(' ');
			}
			b += 1;
		}
		a += 1;
	}
}
/*
int main(){
	ft_print_comb2();
	return 0;
}*/
