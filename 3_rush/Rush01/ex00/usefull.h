/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:11:27 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/07 19:41:19 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USEFULL_H
# define USEFULL_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_carte	t_carte;
struct	s_carte
{
	int	**map;
	int	*view;
	int	size;
};

#endif