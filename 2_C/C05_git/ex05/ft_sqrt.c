/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:38:58 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/09 09:35:21 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 1)
		return (0);
	while ((i * i <= nb) && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[])
// {
// 	(void)argc;
//     printf("Racine de %d = %d", atoi(argv[1]), ft_sqrt(atoi(argv[1])));
//     return 0;
// }
