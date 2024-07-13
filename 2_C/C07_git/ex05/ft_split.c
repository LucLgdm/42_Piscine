/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 08:49:59 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/13 10:15:41 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char *dest, char *src, int debut, int fin)
{
	int	i;

	i = 0;
	while (i < fin - debut + 1)
	{
		dest[i] = src[debut + i];
		i++;
	}
	dest[i] = '\0';
}

int	ft_is_sep(char mot, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
	{
		if (mot == charset[i])
			return (1);
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	cpt;

	i = -1;
	cpt = 0;
	while (str[++i])
	{
		if (ft_is_sep(str[i], charset) && !ft_is_sep(str[i - 1], charset))
			cpt++;
	}
	if (!ft_is_sep(str[i - 1], charset))
		cpt++;
	return (cpt);
}

void	ft_calcul(char *str, char *charset, char **sortie)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		j = i;
		while (!ft_is_sep(str[j], charset) && str[j] != '\0')
		{
			if (ft_is_sep(str[j + 1], charset) || str[j + 1] == '\0')
			{
				sortie[k] = (char *)malloc((j - i + 2) * sizeof(char));
				if (sortie[k] == 0)
					return ;
				ft_strcpy(sortie[k], str, i, j);
				k++;
			}
			j++;
		}
		i = j + 1;
	}
	sortie[k] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**sortie;
	int		n_word;

	n_word = ft_count_word(str, charset);
	if (*charset == '\0')
		n_word = 1;
	sortie = (char **) malloc ((n_word + 1) * sizeof(char *));
	if (sortie == 0)
		return (0);
	if (*charset == '\0')
	{
		sortie[0] = str;
		sortie[1] = 0;
		return (sortie);
	}
	ft_calcul(str, charset, sortie);
	sortie[n_word] = 0;
	return (sortie);
}

// #include <stdio.h>

// int	main()
// {
// 	char **sortie;
// 	char *str = {"Bonjour toi, comment vas-tu fsef"};
// 	char *charset = {" ,-"};
// 	int i = 0;
// 	sortie = ft_split(str, charset);
// 	while (sortie[i] != NULL)
// 	{
// 		printf("Sortie[%d] = %s\n", i, sortie[i]);
// 		i++;
// 	}
// 	printf("Sortie[%d] = %s\n", i, sortie[i]);
// 	return 0;
// }