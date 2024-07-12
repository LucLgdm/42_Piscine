/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 08:15:41 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/11 18:00:07 by lde-merc         ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sortie;
	int		i;
	int		length;
	int		length_sep;

	i = -1;
	length = 0;
	if (size == 0)
		return (NULL);
	while (++i < size)
		length += ft_strlen(strs[i]);
	length_sep = ft_strlen(sep);
	sortie = (char *) malloc((length + (size - 1) * length_sep + 1) * sizeof(char));
	if (sortie == 0)
		return (NULL);
	sortie[0] = '\0';
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

#include <stdio.h>
int main(){
	char *strs[] = {"hello", "world", "htf", "kiffe", "you"};
	char *sep = "\r";
	int size = 5;

	printf("Sortie = %s", ft_strjoin(size, strs, sep));
	return 0;
}