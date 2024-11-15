/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:46:56 by ceslinge          #+#    #+#             */
/*   Updated: 2024/07/15 12:03:21 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

void	fill_struc(struct s_number *struc, char *word, int index, int type)
{
	if (type == 0)
		struc->unity[index] = ft_strdup(word);
	else if (type == 1)
		struc->teen[index] = ft_strdup(word);
	else if (type == 2)
		struc->dozen[index] = ft_strdup(word);
	else
		struc->power[index] = ft_strdup(word);
}

int	fill_tab(char *str, struct s_number *struc)
{
	int		i;
	char	*word;
	int		type;
	int		index;

	i = 0;
	while (str[i])
	{
		type = typenumber(&str[i]);
		index = indexnumber(&str[i]);
		word = dictword(&str[i]);
		if (word == NULL)
			return (0);
		fill_struc(struc, word, index, type);
		while ((str[i] != '\n') && (str[i] != '\0'))
			i++;
		while (str[i] == '\n')
			i++;
		free(word);
	}
	return (1);
}

char	*dictword(char *str)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != ':')
	{	
		if ((str[i] != ' ') && ((str[i] < '0') || (str[i] > '9')))
			return (NULL);
		i++;
	}
	i++;
	while (str[i] == ' ')
		i++;
	word = (char *) malloc((lentonewline(&str[i]) + 1) * sizeof (char));
	if (word == NULL)
		return (word);
	ft_strncpy(word, &str[i], lentonewline(&str[i]));
	word[lentonewline(&str[i])] = '\0';
	return (word);
}

int	typenumber(char *str)
{		
	int	l;

	l = lentospace(str);
	if (l >= 3)
		return (3);
	else if (l == 1)
		return (0);
	else if (str[0] == '1')
		return (1);
	else
		return (2);
}

void	ft_gest_buf(int fd, char **str)
{
	char	buf[1];

	*str = (char *)malloc(1 * sizeof(char));
	*str[0] = '\0';
	while (read(fd, buf, 1) != 0)
	{
		*str = ft_addchar(*str, buf);
		if (*str == NULL)
			break ;
	}
}
