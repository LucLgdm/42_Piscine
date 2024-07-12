/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:40:15 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/07 19:41:17 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "usefull.h"

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

void	ft_allocation(t_carte *plan)
{
	int	i;

	i = 0;
	plan->map = (int **)malloc(plan->size * sizeof(int *));
	if (plan->map == NULL)
	{
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	while (i < plan->size)
	{
		plan->map[i] = (int *)malloc(plan->size * sizeof(int));
		if (plan->map == NULL)
		{
			perror("malloc failed");
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

void	ft_remplissage(t_carte *plan, char **argv)
{
	int	i;

	i = 0;
	while (i < plan->size * plan->size)
	{
		plan->map[i / plan->size][i % plan->size] = 0;
		i++;
	}
	i = 0;
	while (i < ft_strlen(argv[1]))
	{
		if (argv[1][i] > plan->size + 48)
		{
			write(1, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		if (argv[1][i] < 1 + 48)
		{
			write(1, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		plan->view[i / 2] = argv[1][i] - 48;
		i += 2;
	}
}

void	ft_initialisation(t_carte *plan, int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1 || ft_strlen(argv[1]) != 4 * plan->size * 2 - 1)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	ft_allocation(plan);
	plan->view = (int *)malloc(4 * plan->size * sizeof(int));
	if (plan->view == NULL)
	{
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}
	ft_remplissage(plan, argv);
}
