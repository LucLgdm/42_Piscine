/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:27:11 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/08 10:37:05 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	int	res;
// 	int	res2;
// 	int n = 3;

// 	str1 = "Hello World";
// 	str2 = "Hfll";
// 	str3 = "";

// 	res = ft_strncmp(str2, str1, n);
// 	res2 = strncmp(str2, str1, n);
// 	printf("ORIGINAL : %d\nMINE     : %d\n", res2, res);

// 	return (0);
// }
