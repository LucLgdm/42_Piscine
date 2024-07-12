/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:56:55 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/10 11:04:47 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc ((max - min) * sizeof(int));
	if (*range == 0)
		return (-1);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

// int main(){
// 	int	*range;
// 	int size = ft_ultimate_range(&range, 1, 101);
// 	printf("Size = %d", size);
// 	free(range);
// 	return 0;
// }