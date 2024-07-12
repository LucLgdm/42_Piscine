/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:59:46 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/30 13:33:36 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main() {
    char *str1 = "hellowoGrld";
    char *str2 = "world..";
    char *str3 = "";

    printf("str1 est numérique: %d\n", ft_str_is_lowercase(str1));
    printf("str2 est numérique: %d\n", ft_str_is_lowercase(str2));
    printf("str3 est numérique: %d\n", ft_str_is_lowercase(str3));

    return 0;
}*/
