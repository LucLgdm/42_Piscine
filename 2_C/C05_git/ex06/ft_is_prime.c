/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:55:21 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/09 13:12:41 by lde-merc         ###   ########.fr       */
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

// #include <stdio.h>
// int main(){
//     int j = 1;
//     for (int i = -5; i < 100; i++){
//         if (ft_is_prime(i)){
//             printf("%d : %d\n", j, i);
//             j++;
//         }
//     }
// 	printf("%d\n", ft_is_prime(-11));
//     return 0;
// }
