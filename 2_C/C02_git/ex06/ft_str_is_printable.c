/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:45:59 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/30 13:34:51 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main() {
    char *str1 = "HELLOWORLD";
    char *str2 = "Hello\tWorld";
    char *str3 = "";

    printf("str1 est numérique: %d\n", ft_str_is_printable(str1));
    printf("str2 est numérique: %d\n", ft_str_is_printable(str2));
    printf("str3 est numérique: %d\n", ft_str_is_printable(str3));

    return 0;
}*/
