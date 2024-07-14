/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:46:22 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/14 19:49:47 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_map(int *tab, int length, int(*f)(int))
{
    int *sortie;
    int i;

    i = -1;
    sortie = (int *)malloc(length * sizeof(int));
    while (++i < length)
        sortie[i] = f(tab[i]);
    return (sortie);
}
