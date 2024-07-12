/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 06:56:41 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/07 19:41:15 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "usefull.h"

void	ft_initialisation(t_carte *plan, int argc, char *argv[]);
int		ft_calcul(t_carte *plan, int current_i, int current_j);
void	ft_print_map(t_carte *plan);

int	main(int argc, char *argv[])
{
	t_carte	plan;
	int		i;

	i = 0;
	plan.size = 4;
	ft_initialisation(&plan, argc, argv);
	if (ft_calcul(&plan, 0, 0) == 1)
	{
		ft_print_map(&plan);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	while (i < plan.size)
	{
		free(plan.map[i]);
		i++;
	}
	free(plan.map);
	free(plan.view);
	return (0);
}
