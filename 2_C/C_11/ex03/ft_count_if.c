/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:26:22 by marvin            #+#    #+#             */
/*   Updated: 2024/08/01 16:26:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char *))
{
	int	cpt;
	int	i;

	i = -1;
	cpt = 0;
	while (++i < length)
	{
		if (f(tab[i]) != 0)
			cpt++;
	}
	return (cpt);
}
int is_non_empty_string(char *str)
{
    return (str[0] != '\0');
}

int main(void)
{
    char *tab[] = {"Hello", "", "World", "", "42", "Coding", ""};
    int length = sizeof(tab) / sizeof(tab[0]);
    int result;

    result = ft_count_if(tab, length, &is_non_empty_string);
    printf("Nombre de chaines non vides: %d\n", result);

    return 0;
}
