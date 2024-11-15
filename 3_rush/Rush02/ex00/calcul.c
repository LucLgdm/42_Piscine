/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:10:02 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/14 17:18:47 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
		cpt++;
	return (cpt);
}

void	ft_strcat(char *s1, char *s2)
{
	int	i;
	int	s1_size;

	s1_size = ft_strlen(s1);
	i = -1;
	while (s2[++i] != '\0')
	{
		s1[s1_size + i] = s2[i];
	}
	s1[s1_size + i] = ' ';
	s1[s1_size + i + 1] = '\0';
}

void	ft_calcul_str(t_number *number, char *c_number)
{
	int	i;
	int	cpt;
	int	thousands;
	int	stock[3];

	cpt = ft_strlen(c_number);
	i = 0;
	thousands = 0;
	while (i <= ft_strlen(c_number) - 1)
	{
		stock[0] = i;
		stock[1] = cpt;
		stock[2] = thousands;
		write_str(number, c_number, stock);
		if ((cpt % 3 == 2) && (c_number[i] == '1'))
		{
			cpt--;
			i++;
		}
		cpt--;
		i++;
	}
}

void	write_str(t_number *n, char *c_n, int *s)
{
	if ((c_n[s[0]] != '0') || (ft_strlen(c_n) == 1))
	{
		s[2] = 1;
		if (s[1] % 3 == 2)
		{
			if (c_n[s[0]] == '1')
				writelenspace(n->teen[c_n[s[0] + 1] - '0'], s[0]);
			else
				writelenspace(n->dozen[c_n[s[0]] - '0' - 2], s[0]);
		}
		else
		{
			writelenspace(n->unity[c_n[s[0]] - '0'], s[0]);
			if (s[1] % 3 == 0)
				writelenspace(n->power[0], 1);
		}
	}
	if (is_thousand(c_n, s))
	{
		writelenspace(n->power[s[1] / 3], 1);
		s[2] = 0;
	}
}

int	is_thousand(char *c_number, int *stock)
{
	if ((stock[1] > 3) && (stock[1] % 3 == 1) && (stock[2] == 1))
		return (1);
	if ((stock[1] > 3) && (stock[1] % 3 == 2) && (c_number[stock[0]] == '1'))
		return (1);
	return (0);
}
