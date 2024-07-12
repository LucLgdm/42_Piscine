/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:31:00 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/01 20:01:00 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	count(char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strcat(char *dest, char *src)
{
	int	counter_dest;
	int	i;

	i = 0;
	counter_dest = count(dest);
	while (src[i] != '\0')
	{
		dest[counter_dest + i] = src[i];
		i++;
	}
	dest[counter_dest + i] = '\0';
	return (dest);
}

// int main(){
// 	char	str1[100];
// 	char	str2[] = " Je m'appelle Luc ";
// 	char	str3[100];
// 	char	str4[] = "Bonjour !";
// 	char	*final;
// 	char	*final2;

// 	for(int i = 0; i < 10; i++)
// 	{
// 		str1[i] = 'a' + i;
// 		str3[i] = 'k' + i;
// 	}
// 	str1[10] = '\0';
// 	str3[10] = '\0';

// 	final = ft_strcat(str1, str2);
// 	final2 = strcat(str3, str4);
// 	printf("ORIG: %s\nMINE: %s\n", final2, final);
// 	printf("MINE : %s\n", final);
// 	return 0;
// }
