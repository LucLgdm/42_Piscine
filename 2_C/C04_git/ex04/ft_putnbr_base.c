/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 20:43:13 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/04 11:00:46 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*c)
{
	int	cpt;

	cpt = 0;
	while (c[cpt] != '\0')
	{
		cpt++;
	}
	return (cpt);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) > 1)
	{
		i = 0;
		while (base[i] != '\0')
		{
			if (base[i] == '+' || base[i] == '-')
				return (1);
			j = i + 1;
			while (base[j] != '\0')
			{
				if (base[i] == base[j])
					return (1);
				j++;
			}
			i++;
		}
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	int			result[1000];
	int			i;

	if (ft_check_base(base) == 0)
	{
		nb = nbr;
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		i = 0;
		while (nb)
		{
			result[i] = nb % ft_strlen(base);
			nb = nb / ft_strlen(base);
			i++;
		}
		while (i--)
		{
			ft_putchar(base[result[i]]);
		}
	}
}

// int	main(){
// 	ft_putnbr_base(-2147483648, "01");
// 	return 0;
// }