/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:51:24 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/26 11:51:26 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	neg = 'N';
	pos = 'P';
	if (n < 0)
	{
		write(1, &neg, 1);
	}
	else
	{
		write(1, &pos, 1);
	}
}
/*
int main(){
	ft_is_negative(-5);
	ft_is_negative(5);
	ft_is_negative(0);
	return 0;
}*/
