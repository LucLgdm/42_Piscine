/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:21:08 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/14 17:18:45 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

int	check_argv(int argc, char **argv, char **nb, char **dict_path)
{
	if (argc == 2)
	{
		*dict_path = "numbers.dict";
		*nb = argv[1];
		return (1);
	}
	else if (argc == 3)
	{
		*dict_path = argv[1];
		*nb = argv[2];
		return (1);
	}
	return (0);
}

int	ft_check_nb(char *nb)
{
	int	i;

	i = -1;
	if (nb[0] == '\0')
		return (0);
	if (nb[0] == '0' && nb[1] != '\0')
		return (0);
	while (nb[++i])
	{
		if (nb[i] < '0' || nb[i] > '9')
			return (0);
	}
	return (1);
}

void	ft_free(t_number *s_number)
{
	int	i;

	i = -1;
	while (++i < 10)
		free(s_number->unity[i]);
	i = -1;
	while (++i < 8)
		free(s_number->dozen[i]);
	i = -1;
	while (++i < 10)
		free(s_number->teen[i]);
	i = -1;
	while (++i < 13)
		free(s_number->power[i]);
}

char	*ft_lunch(char *nb, char *dict_path)
{
	t_number	s_number;
	char		*str;
	int			fd;

	fd = 0;
	str = "";
	fd = open(dict_path, O_RDONLY);
	if (fd == -1)
		ft_putstr("Error\n", 2);
	else
	{
		ft_gest_buf(fd, &str);
		if (fill_tab(str, &s_number) == 1)
		{
			str[0] = '\0';
			ft_calcul_str(&s_number, nb);
		}
		else
		{
			ft_putstr("Dict Error\n", 2);
			return (NULL);
		}
	}
	ft_free(&s_number);
	return (str);
}

int	main(int argc, char *argv[])
{
	char	*sortie;
	char	*nb;
	char	*dict_path;

	sortie = "";
	if (check_argv(argc, argv, &nb, &dict_path) == 0 || ft_check_nb(nb) == 0)
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
	if (ft_strlen(nb) >= 40)
	{
		ft_putstr("Dict Error\n", 1);
		return (0);
	}
	else
	{
		sortie = ft_lunch(nb, dict_path);
		if (sortie == NULL)
			return (0);
	}
	ft_putstr(sortie, 1);
	free(sortie);
	return (0);
}
