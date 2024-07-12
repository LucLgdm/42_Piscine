/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:47:39 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/10 11:04:17 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = (int *) malloc((max - min) * sizeof(int));
	if (tab == 0)
		return (0);
	i = min;
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	return (tab);
}

// int main(){
//     int min = 1, max = 101;
//     int *tableau = ft_range(min, max);
//     for(int i = 0; i < max - min; i++){
//         printf("%d ", tableau[i]);
//     }
//     return 0;
// }