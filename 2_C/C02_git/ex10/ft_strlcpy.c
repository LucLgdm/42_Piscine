/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 20:27:45 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/01 12:11:15 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	size_src;
	unsigned int	i;

	size_src = 0;
	i = 0;
	while (src[size_src] != '\0')
	{
		size_src++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (size_src);
}
/*
int main() {
    char src[] = "Hello, World!";
    char dest[8];

    unsigned int length = ft_strlcpy(dest, src, sizeof(dest));

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Length of source: %u\n", length);

    return 0;
}*/
