/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:43:55 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/01 20:01:02 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	a;
	unsigned int	b;
	int				i;

	i = 0;
	while (s1[i] != '\0')
	{
		a = (unsigned char)s1[i];
		b = (unsigned char)s2[i];
		if (a - b != 0)
		{
			return (a - b);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main()
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	int	res;
// 	int	res2;

// 	str1 = "Hello World";
// 	str2 = "Hello";
// 	str3 = "";

// 	res = ft_strcmp(str3, str1);
// 	res2 = strcmp(str3, str1);
// 	printf("ORIGINAL : %d\nMINE     : %d\n", res2, res);

// 	return (0);
// }