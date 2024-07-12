/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:47:41 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/30 13:32:57 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main() {
    char *str1 = "123456";
    char *str2 = "123a456";
    char *str3 = "";

    printf("str1 est numérique: %d\n", ft_str_is_numeric(str1));
    printf("str2 est numérique: %d\n", ft_str_is_numeric(str2));
    printf("str3 est numérique: %d\n", ft_str_is_numeric(str3));

    return 0;
}*/
