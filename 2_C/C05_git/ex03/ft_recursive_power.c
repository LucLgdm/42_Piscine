/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:25:21 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/06 10:20:08 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
}

// #include <stdio.h>
// int main()
// {
//     int x = 0;
//     int n = 2;
//     printf("%d^%d = %d\n", x, n, ft_recursive_power(x, n));
// 	x = 1;
//     n = 2;
//     printf("%d^%d = %d\n", x, n, ft_recursive_power(x, n));
// 	x = 4;
//     n = 2;
//     printf("%d^%d = %d\n", x, n, ft_recursive_power(x, n));
// 	x = 3;
//     n = 3;
//     printf("%d^%d = %d\n", x, n, ft_recursive_power(x, n));
// 	x = 2;
//     n = 4;
//     printf("%d^%d = %d\n", x, n, ft_recursive_power(x, n));
// 	x = 5;
//     n = 3;
//     printf("%d^%d = %d\n", x, n, ft_recursive_power(x, n));
//     return 0;
// }