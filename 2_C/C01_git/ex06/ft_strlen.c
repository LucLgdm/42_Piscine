/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 07:27:46 by lde-merc          #+#    #+#             */
/*   Updated: 2024/06/27 07:29:55 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_strlen(char *str)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
/*
int	main()
{
	char	*str = "Hello World !";
	int 	size;

	size = ft_strlen(str);
	printf("taille de la chaine = %d\n ", size);
	return 0;
}*/
