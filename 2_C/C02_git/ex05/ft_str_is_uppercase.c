/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:06:20 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/30 13:34:12 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main() {
    char *str1 = "HELLO WORLD";
    char *str2 = "Hello world";
    char *str3 = "";

    printf("str1 est numérique: %d\n", ft_str_is_uppercase(str1));
    printf("str2 est numérique: %d\n", ft_str_is_uppercase(str2));
    printf("str3 est numérique: %d\n", ft_str_is_uppercase(str3));

    return 0;
}*/
