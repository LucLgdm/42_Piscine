/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:04:42 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/06 10:46:38 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write (1, &c[i], 1);
		i++;
	}
}

char	*ft_convert_to_hexa(char c, char *out)
{
	char	*table;

	table = "0123456789abcdef";
	out[0] = '\\';
	out[1] = table[c / 16];
	out[2] = table[c % 16];
	out[3] = '\0';
	return (out);
}

void	ft_putchar_non_printable(char *str)
{
	char	out[4];
	char	*out2;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((0 <= str[i] && str[i] <= 31) || str[i] == 127)
		{
			out2 = ft_convert_to_hexa((unsigned char)str[i], out);
			ft_print_str(out);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int main(){
	char	*c1 = "Coucou\ntu vas bien ?";
	char	*c2 = "Yo poto, b\tien ?";
	ft_putchar_non_printable(c1);
	printf("\n");
	ft_putchar_non_printable(c2);
	return 0;
}*/
