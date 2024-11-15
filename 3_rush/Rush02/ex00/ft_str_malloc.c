/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:38:41 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/14 17:18:51 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

char	*ft_strdup(char *src)
{
	char	*copy;
	int		src_size;
	int		i;

	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	copy = (char *)malloc(src_size * sizeof(char) + 1);
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
