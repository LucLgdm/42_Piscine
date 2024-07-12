/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:01:41 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/30 13:32:24 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_check(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		return (1);
	}
	else if (str >= 'A' && str <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	test;

	i = 0;
	test = 1;
	while (str[i] != '\0')
	{
		test = ft_check(str[i]);
		if (test == 0)
		{
			break ;
		}
		i++;
	}
	return (test);
}
/*
int main() {
    char str1[] = "HelloWorld102";
    char str2[] = "Hello";
    char str3[] = "";

    printf("\"%s\" : %d\n", str1, ft_str_is_alpha(str1));
    printf("\"%s\" : %d\n", str2, ft_str_is_alpha(str2));
    printf("\"%s\" : %d\n", str3, ft_str_is_alpha(str3));

    return 0;
}*/
