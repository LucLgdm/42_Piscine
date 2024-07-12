/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:12:53 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/06 10:20:04 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int	main(void)
// {
//     int n = 0;
//     printf("factoriel %d = %d", n, ft_recursive_factorial(n));
// 	n = 1;
//     printf("factoriel %d = %d", n, ft_recursive_factorial(n));
// 	n = 2;
//     printf("factoriel %d = %d", n, ft_recursive_factorial(n));
// 	n = 3;
//     printf("factoriel %d = %d", n, ft_recursive_factorial(n));
// 	n = 4;
//     printf("factoriel %d = %d", n, ft_recursive_factorial(n));
// 	n = 5;
//     printf("factoriel %d = %d", n, ft_recursive_factorial(n));
//     return 0;
// }
