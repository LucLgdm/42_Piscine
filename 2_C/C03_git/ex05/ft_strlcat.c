/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:31:22 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/04 12:35:03 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>

unsigned int	count(char *str)
{
	unsigned int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = count(dest);
	src_size = count(src);
	i = 0;
	if (dest_size >= size)
		return (size + src_size);
	while (src[i] != '\0' && dest_size + i < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
/*
int main()
{
	char	dest[25] = "Hello World";
	char	*src = "987654321";
	unsigned int	siz = sizeof(dest);
	printf("MINE    : %d\n", ft_strlcat(dest, src, siz));
	return 0;
}
*/