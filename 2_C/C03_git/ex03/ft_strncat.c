/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:52:32 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/01 20:00:58 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

unsigned int	count(char *s)
{
	unsigned int	c;

	c = 0.;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter_dest;
	unsigned int	i;

	i = 0;
	counter_dest = count(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[counter_dest + i] = src[i];
		i++;
	}
	dest[counter_dest + i] = '\0';
	return (dest);
}

// int main(){
//     char	str1[100];
// 	char	str2[] = " Bonjour !";
// 	char	*final;
// 	char	*final2;

// 	for(int i = 0; i < 10; i++)
// 	{
// 		str1[i] = 'a' + i;
// 	}
// 	str1[10] = '\0';

// 	final = ft_strncat(str1, str2, 4);
// //	final2 = strncat(str1, str2, 30);
// //    printf("ORIGINAL : %s\nMINE     : %s\n", final2, final);
// 	printf("MINE : %s\n", final);
// 	return 0;
// }
