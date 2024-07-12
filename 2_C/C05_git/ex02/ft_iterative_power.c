/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:14:21 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/08 14:17:36 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	res = 1;
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	int x = 36;
//     int n = 0;
//     printf("%d^%d = %d\n", x, n, ft_iterative_power(x, n));
// 	x = 0;
//     n = 2;
//     printf("%d^%d = %d\n", x, n, ft_iterative_power(x, n));
// 	x = 1;
//     n = 1;
//     printf("%d^%d = %d\n", x, n, ft_iterative_power(x, n));
// 	x = 4;
//     n = 2;
//     printf("%d^%d = %d\n", x, n, ft_iterative_power(x, n));
// 	x = 156;
//     n = 1;
//     printf("%d^%d = %d\n", x, n, ft_iterative_power(x, n));
// 	x = 2;
//     n = 4;
//     printf("%d^%d = %d\n", x, n, ft_iterative_power(x, n));
// 	x = 5;
//     n = 6;
//     printf("%d^%d = %d\n", x, n, ft_iterative_power(x, n));
//     return 0;
// }