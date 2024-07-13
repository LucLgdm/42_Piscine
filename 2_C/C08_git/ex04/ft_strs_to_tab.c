/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:57:52 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/13 19:40:39 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt])
		cpt++;
	return (cpt);
}

void	ft_strcpy(char *dest, char *src)
{
	int	src_size;
	int	i;

	i = 0;
	src_size = ft_strlen(src);
	while (i < src_size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*sortie;
	int					i;

	i = -1;
	sortie = (struct s_stock_str *)malloc(ac * sizeof(struct s_stock_str));
	if (sortie == NULL)
		return (0);
	while (++i < ac)
	{
		sortie[i].size = ft_strlen(av[i]);
		sortie[i].str = (char *)malloc(sortie[i].size * sizeof(char));
		if (sortie[i].str == 0)
			return (NULL);
		ft_strcpy(sortie[i].str, av[i]);
		sortie[i].copy = (char *)malloc(sortie[i].size * sizeof(char));
		if (sortie[i].copy == 0)
			return (NULL);
		ft_strcpy(sortie[i].copy, av[i]);
	}
	sortie[i].str = "\0";
	return (sortie);
}

// #include <stdio.h>
// int	main(void)
// {
// 	struct s_stock_str	*sortie;
// 	int			ac;
// 	char		*av[] = {"bonjour", "84hy", "bisous", "ciao"};
// 	ac = 4;
// 	sortie = ft_strs_to_tab(ac, av);
// 	ft_show_tab(sortie);
// 	return (0);
// }