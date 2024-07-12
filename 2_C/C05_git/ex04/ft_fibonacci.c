/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:32:34 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/06 10:20:36 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int main(){
//    for(int n = 0; n < 10; n++){
//       printf("%d ", ft_fibonacci(n));
//    }
//    return 0;
// }
