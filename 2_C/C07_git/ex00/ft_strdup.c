/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:28:37 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/11 12:05:43 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		src_size;
	int		i;

	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	copy = (char *) malloc(src_size * sizeof(char) + 1);
	if (copy == 0)
		return (0);
	i = 0;
	while (i < src_size)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (&copy[0]);
}

// int	main(int argc, char *argv[]){
// 	printf("ORIG: %s\nMINE: %s", argv[1], ft_strdup(argv[1]));
// 	return 0;
// }