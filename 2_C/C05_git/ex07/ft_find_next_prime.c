/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:05:56 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/08 14:17:03 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next;

	next = nb;
	while (ft_is_prime(next) != 1)
		next++;
	return (next);
}

// #include <stdio.h>
// int main(){
//     int n = 1156483;
//     printf("Nombre: %d\nPremier suivant: %d", n, ft_find_next_prime(n));
//     return 0;
// }
