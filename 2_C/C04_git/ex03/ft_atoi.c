/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:36:20 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/03 18:28:21 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sortie;
	int	sign;

	i = 0;
	sortie = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sortie = 10 * sortie + str[i] - 48;
		i++;
	}
	return (sign * sortie);
}

// int	main(){
// 	printf("%d\n", ft_atoi(" 	-+++--+--2147 483648"));
// 	return (0);
// }
