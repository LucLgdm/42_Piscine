/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:59:17 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/04 09:48:53 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	count(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	needle_size;
	int	haystack_size;

	needle_size = count(to_find);
	haystack_size = count(str);
	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (i + needle_size <= haystack_size)
	{
		j = 0;
		while (j < needle_size)
		{
			if (to_find[j] != str[i + j])
				break ;
			j++;
		}
		if (j == needle_size)
			return (&str[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char	*haystack = "C'est une chanson qui nous ressemble,
// toi qui m'aimais, moi qui t'aimais";
// 	char	*needle = "toi";
// 	char    *output;

// 	output = strstr(haystack, needle);
// 	printf("MINE: |%s\n", ft_strstr(haystack, needle));
// //	printf("ORIG : %s\n", output);
// 	return 0;
// }