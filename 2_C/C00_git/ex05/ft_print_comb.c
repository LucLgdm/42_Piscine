/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:51:37 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/26 11:51:40 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < '8')
	{
		b = a + 1;
		while (b < '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					ft_write(a, b, c);
				}
				c += 1;
			}
			b += 1;
		}
		c += 1;
		a += 1;
	}
}
/*
int main(){
	ft_print_comb();
	return 0;
}*/
