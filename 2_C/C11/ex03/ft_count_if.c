/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:54:19 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/14 19:58:27 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int length, int(*f)(char*))
{
    int counter;
    int i;

    i = -1;
    counter = 0;
    while (++i < length)
    {
        if (f(tab[i]) != 0)
            counter++;
    }
    return (counter);
}
