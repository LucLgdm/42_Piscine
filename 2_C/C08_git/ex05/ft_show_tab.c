/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:05:12 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/11 14:46:26 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par)
{
	int		j;
	char	c;
	int		i;

	i = -1;
	while (par[++i].str)
	{
		j = -1;
		while (par[i].str[++j])
			write(1, &par[i].str[j], 1);
		write(1, "\n", 1);
		c = par[i].size + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		j = -1;
		while (par[i].copy[++j])
			write(1, &par[i].copy[j], 1);
		write(1, "\n", 1);
	}
}
