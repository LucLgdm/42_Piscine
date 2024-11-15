/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:13:11 by ceslinge          #+#    #+#             */
/*   Updated: 2024/07/14 17:18:52 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

int	lentospace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != ' ') && (str[i] != ':'))
		i++;
	return (i);
}

int	indexnumber(char *str)
{	
	int	l;

	l = lentospace(str);
	if (l >= 3)
		return ((l - 1) / 3);
	else if (l == 1)
		return (str[0] - '0');
	else if (str[0] == '1')
		return (str[1] - '0');
	else
		return (str[0] - '2');
}

void	ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

int	lentonewline(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\n') && (str[i] != '\0'))
		i++;
	return (i);
}

char	*ft_addchar(char *str, char *buf)
{
	int		i;
	char	*new;

	i = 0;
	while (str[i])
		i++;
	new = (char *)malloc((i + 2) * sizeof(char));
	if (new == 0)
		return (0);
	i = -1;
	while (str[++i])
		new[i] = str[i];
	new[i] = buf[0];
	new[i + 1] = '\0';
	free(str);
	return (new);
}
