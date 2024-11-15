/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 08:16:35 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/14 17:18:50 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

void	ft_putchar(char c, int i)
{
	write(i, &c, 1);
}

void	ft_putstr(char *str, int i)
{
	int	j;

	j = -1;
	while (str[++j] != '\0')
		ft_putchar(str[j], i);
}

void	writelenspace(char *str, int i)
{	
	if (i != 0)
		ft_putchar(' ', 1);
	ft_putstr(str, 1);
}
