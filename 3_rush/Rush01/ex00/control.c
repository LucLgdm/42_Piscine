/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:36:30 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/07 19:41:14 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "usefull.h"

int	ft_check_lg(t_carte *plan, int line)
{
	int	h;
	int	i;
	int	vue;

	i = 0;
	vue = 0;
	h = 0;
	while (i < plan->size)
	{
		if (plan->map[line][i] > h)
		{
			h = plan->map[line][i];
			vue++;
		}
		i++;
	}
	return (vue);
}

int	ft_check_ld(t_carte *plan, int line)
{
	int	i;
	int	vue;
	int	h;

	i = plan->size - 1;
	vue = 0;
	h = 0;
	while (i >= 0)
	{
		if (plan->map[line][i] > h)
		{
			h = plan->map[line][i];
			vue++;
		}
		i--;
	}
	return (vue);
}

int	ft_check_ch(t_carte *plan, int column)
{
	int	h;
	int	i;
	int	vue;

	i = 0;
	vue = 0;
	h = 0;
	while (i < plan->size)
	{
		if (plan->map[i][column] > h)
		{
			h = plan->map[i][column];
			vue++;
		}
		i++;
	}
	return (vue);
}

int	ft_check_cb(t_carte *plan, int column)
{
	int	i;
	int	h;
	int	vue;

	i = plan->size - 1;
	vue = 0;
	h = 0;
	while (i >= 0)
	{
		if (plan->map[i][column] > h)
		{
			h = plan->map[i][column];
			vue++;
		}
		i--;
	}
	return (vue);
}

