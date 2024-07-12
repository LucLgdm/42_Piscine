/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:26:32 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/07 16:58:28 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_safe(int i, int *pos)
{
	int	k;

	k = 0;
	while (k < i)
	{
		if (pos[i] == pos[k] || pos[i] == pos[k] + i - k)
		{
			return (0);
		}
		else if (pos[i] == pos[k] - i + k)
		{
			return (0);
		}
		k++;
	}
	return (1);
}

void	print(int *chess)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = chess[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	play(int n, int *nb, int *chess)
{
	int	i;

	i = 0;
	if (n == 10)
	{
		(*nb)++;
		print(chess);
		return ;
	}
	while (i < 10)
	{
		chess[n] = i;
		if (is_safe(n, chess))
		{
			play(n + 1, nb, chess);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	chessboard[10];
	int	nb_possibility;
	int	i;

	i = 0;
	nb_possibility = 0;
	while (i < 10)
	{
		chessboard[i] = 0;
		i++;
	}
	play(0, &nb_possibility, chessboard);
	return (nb_possibility);
}

// #include <stdio.h>
// int	main(){
//        printf("%d", ft_ten_queens_puzzle());
//        return 0;
// }
