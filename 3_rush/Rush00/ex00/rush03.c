void	ft_putchar(char a);

void	ft_affiche_1(int i, int j, int m)
{
	if (j == 0)
	{
		ft_putchar('A');
	}
	else if (j == m - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	ft_affiche_2(int j, int m)
{
	if (j == 0 || j == m - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int m, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			if (i == 0 || i == n - 1)
			{
				ft_affiche_1(i, j, m);
			}
			else
			{
				ft_affiche_2(j, m);
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
