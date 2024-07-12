/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:29:47 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/30 13:36:35 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	check_char(char mot)
{
	if (mot >= '0' && mot <= '9')
	{
		return (1);
	}
	else if (mot >= 'a' && mot <= 'z')
	{
		return (1);
	}
	else if (mot >= 'A' && mot <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && check_char(str[i - 1]) == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int main() {
    char str1[] = "hello,world! how are you?";
    char str2[] = "HEL42LO, 42world! 42how are you?";
    char str3[] = "HELLO, WORLD! HOW ARE YOU?";
    char str4[] = "";

    printf("Avant : %s\n", str1);
    printf("Après : %s\n\n", ft_strcapitalize(str1));

    printf("Avant : %s\n", str2);
    printf("Après : %s\n\n", ft_strcapitalize(str2));

    printf("Avant : %s\n", str3);
    printf("Après : %s\n\n", ft_strcapitalize(str3));

    printf("Avant : %s\n", str4);
    printf("Après : %s\n", ft_strcapitalize(str4));

    return 0;
}*/
