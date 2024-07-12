/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:24:10 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/10 12:55:38 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap_char(char **c, int i, int j)
{
	char	*ctemp;

	ctemp = c[i];
	c[i] = c[j];
	c[j] = ctemp;
}

void	ft_affichage(int n, char *c[])
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (c[i][j] != '\0')
		{
			write(1, &c[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap_char(argv, i, j);
			j++;
		}
		i++;
	}
	ft_affichage(argc, argv);
	return (0);
}
