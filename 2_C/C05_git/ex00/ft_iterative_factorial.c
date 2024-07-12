/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:02:35 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/06 10:20:50 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i != 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
//     int n = -1;
//     printf("factoriel %d = %d", n, ft_iterative_factorial(n));
//     return 0;
// }
