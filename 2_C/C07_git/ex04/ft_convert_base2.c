/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:23:19 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/13 10:15:34 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
		cpt++;
	return (cpt);
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
				return (0);
			if (base[i] < 32 || base[i] == 127)
				return (0);
			j = i + 1;
			while (base[j] != '\0')
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
			i++;
		}
	}
	else
		return (0);
	return (1);
}

int	ft_check_str(int i, char *str, int sortie, int base_size)
{
	if (str[i] >= 'A' && str[i] <= 'F')
		sortie = base_size * sortie + str[i] - 'A';
	else if (str[i] >= 'a' && str[i] <= 'f')
		sortie = base_size * sortie + str[i] - 'a';
	else
		sortie = base_size * sortie + str[i] - '0';
	return (sortie);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (c == base[i])
			return (1);
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	static int	sortie;
	int			base_size;
	int			sign;
	int			i;

	base_size = ft_strlen(base);
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (ft_check_base(base))
	{
		while (i < ft_strlen(str) && ft_is_in_base(str[i], base))
		{
			sortie = ft_check_str(i, str, sortie, base_size);
			i++;
		}
	}
	return (sign * sortie);
}
