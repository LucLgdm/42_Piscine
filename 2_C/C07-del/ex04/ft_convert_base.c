/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:23:33 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/11 14:36:42 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_base(char *base);
int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

char	*ft_conversion_to_base(int n, char *base_to, char *temp, char *sortie)
{
	int	i;

	i = 0;
	while (n)
	{
		temp[i] = base_to[n % ft_strlen(base_to)];
		n /= ft_strlen(base_to);
		i++;
	}
	while (i--)
	{
		if (sortie[0] == '-')
			sortie[ft_strlen(temp) - i] = temp[i];
		else
			sortie[ft_strlen(temp) - i - 1] = temp[i];
	}
	return (sortie);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		int_temp;
	char	*sortie;
	char	*temp;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	int_temp = ft_atoi_base(nbr, base_from);
	sortie = (char *) malloc (ft_strlen(nbr) * sizeof(char));
	if (sortie == 0)
		return (NULL);
	temp = (char *) malloc (ft_strlen(nbr) * sizeof(char));
	if (temp == 0)
		return (NULL);
	if (int_temp < 0)
	{
		int_temp *= -1;
		sortie[0] = '-';
	}
	sortie = ft_conversion_to_base(int_temp, base_to, temp, sortie);
	if (int_temp == 0 || int_temp == -0)
		sortie[0] = base_to[0];
	free(temp);
	return (sortie);
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	if (argc != 4)
// 		return (0);
// 	printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
// 	return (0);
// }
