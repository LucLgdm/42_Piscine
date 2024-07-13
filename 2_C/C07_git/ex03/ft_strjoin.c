/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 08:15:41 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/13 10:15:39 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
		cpt++;
	return (cpt);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	size_s1;
	int	i;

	i = 0;
	size_s1 = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[size_s1 + i] = s2[i];
		i++;
	}
	s1[size_s1 + i] = '\0';
	return (s1);
}

int	ft_size_totale(int size, char **strs, char *sep)
{
	int	i;
	int	length_sep;
	int	length;

	i = -1;
	length = 0;
	while (++i < size)
		length += ft_strlen(strs[i]);
	length_sep = ft_strlen(sep);
	length = length + (size - 1) * length_sep + 1;
	return (length);
}

char	*ft_write_sortie(char **strs, char *sep, char *sortie, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_strcat(sortie, strs[i]);
		ft_strcat(sortie, sep);
		i++;
	}
	ft_strcat(sortie, strs[i]);
	return (sortie);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sortie;
	int		length;

	if (size == 0)
	{
		sortie = (char *)malloc(sizeof(char) * 1);
		if (sortie == NULL)
			return (NULL);
		sortie[0] = '\0';
		return (sortie);
	}
	length = ft_size_totale(size, strs, sep);
	sortie = (char *) malloc(length * sizeof(char));
	if (sortie == NULL)
		return (NULL);
	sortie[0] = '\0';
	sortie = ft_write_sortie(strs, sep, sortie, size);
	return (sortie);
}

// #include <stdio.h>
// int main(){
// 	char *strs[] = {}; //{"hello", "world", "I", "kiffe", "you"};
// 	char *sep = "    ";
// 	int size = 0;
// 	char *sortie;

// 	sortie = ft_strjoin(size, strs, sep);
// 	printf("%s\n", sortie);
// 	sortie = ft_strjoin(size, strs, "_aa_");
// 	printf("%s\n", sortie);
// 	free(sortie);
// 	return 0;
// }