/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:23:30 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/30 13:35:23 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int main() {
    char str1[] = "Hello, World!";
    char str2[] = "qwertyuioplkjhgfdsazxcvbnm";
    char str3[] = "!@#$%^&*()_-=+`~,./<>?;':[]{}\\|";
    char str4[] = "";

    printf("Avant : %s\n", str1);
    printf("Après : %s\n", ft_strupcase(str1));
	printf("\n");
	
    printf("Avant : %s\n", str2);
    printf("Après : %s\n", ft_strupcase(str2));
	printf("\n");
	
    printf("Avant : %s\n", str3);
    printf("Après : %s\n", ft_strupcase(str3));
	printf("\n");

    printf("Avant : %s\n", str4);
    printf("Après : %s\n", ft_strupcase(str4));

    return 0;
}*/
