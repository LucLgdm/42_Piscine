/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:51:41 by lde-merc          #+#    #+#             */
/*   Updated: 2024/07/14 17:18:47 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_H
# define FT_FT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_number	t_number;
struct s_number
{
	char	*unity[10];
	char	*dozen[8];
	char	*teen[10];
	char	*power[13];
};

int		ft_strlen(char *str);

void	ft_free(t_number *s_number);

int		ft_check_nb(char *nb);

int		check_argv(int argc, char **argv, char **nb, char **dict_path);

void	ft_putchar(char c, int i);

void	ft_putstr(char *str, int i);

void	ft_gest_buf(int fd, char **str);

int		is_thousand(char *c_number, int *stock);

char	*ft_addchar(char *str, char *buf);

void	ft_calcul_str(t_number *number, char *c_number);

void	writelenspace(char *str, int i);

char	*dictword(char *str);

char	*ft_strdup(char *src);

void	write_str(t_number *n, char *c_n, int *s);

int		typenumber(char *str);

int		indexnumber(char *str);

int		lentonewline(char *str);

int		lentospace(char *str);

void	ft_strncpy(char *dest, char *src, int n);

int		fill_tab(char *str, struct s_number *struc);

void	fill_struc(struct s_number *struc, char *word, int index, int type);

#endif
