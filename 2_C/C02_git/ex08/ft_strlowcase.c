/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:24:07 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/01 12:10:52 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int main() {
    char str1[] = "Hello, World!";
    char str2[] = "QWERTYUIOPLKJHGFDSAZXCVBNM";
    char str3[] = "!@#$%^&*()`-=~_+[]\\{}|;':,./<>?";
    char str4[] = "";

    printf("Avant : %s\n", str1);
    printf("Après : %s\n", ft_strlowcase(str1));
	printf("\n");
	
    printf("Avant : %s\n", str2);
    printf("Après : %s\n", ft_strlowcase(str2));
	printf("\n");
	
    printf("Avant : %s\n", str3);
    printf("Après : %s\n", ft_strlowcase(str3));
	printf("\n");

    printf("Avant : %s\n", str4);
    printf("Après : %s\n", ft_strlowcase(str4));

    return 0;
}*/
