/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 07:26:20 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/07 19:41:13 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "usefull.h"

int	ft_check_cb(t_carte *plan, int column);
int	ft_check_ch(t_carte *plan, int column);
int	ft_check_ld(t_carte *plan, int line);
int	ft_check_lg(t_carte *plan, int line);

int	ft_check_nbr(t_carte *plan, int line, int column)
{
	int	i;

	i = 0;
	while (i < line)
	{
		if (plan->map[line][column] == plan->map[i][column])
			return (0);
		i++;
	}
	i = 0;
	while (i < column)
	{
		if (plan->map[line][column] == plan->map[line][i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_map(t_carte *plan)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < plan->size)
	{
		j = 0;
		while (j < plan->size)
		{
			c = plan->map[i][j] + '0';
			write(1, &c, 1);
			if (j < plan->size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_check_view(t_carte *plan)
{
	int	vue;
	int	i;

	i = 0;
	while (i < plan->size)
	{
		vue = ft_check_lg(plan, i);
		if (!(plan->view[2 * plan->size + i] == vue))
			return (0);
		vue = ft_check_ld(plan, i);
		if (!(plan->view[3 * plan->size + i] == vue))
			return (0);
		vue = ft_check_ch(plan, i);
		if (!(plan->view[i] == vue))
			return (0);
		vue = ft_check_cb(plan, i);
		if (!(plan->view[plan->size + i] == vue))
			return (0);
		i++;
	}
	return (1);
}

int	ft_calcul(t_carte *plan, int current_i, int current_j)
{
	int	i;

	i = 1;
	if (current_i == plan->size)
		return (ft_check_view(plan));
	if (current_j == plan->size)
		return (ft_calcul(plan, current_i + 1, 0));
	while (i <= plan->size)
	{
		plan->map[current_i][current_j] = i;
		if (ft_check_nbr(plan, current_i, current_j))
		{
			if (ft_calcul(plan, current_i, current_j + 1))
				return (1);
		}
		plan->map[current_i][current_j] = 0;
		i++;
	}
	return (0);
}
