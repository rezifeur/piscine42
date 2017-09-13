/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 14:12:37 by cbrian            #+#    #+#             */
/*   Updated: 2017/09/10 22:35:47 by cbrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_line(char **s, int a, int b, char c);
int		is_colonne(char **s, int a, int b, char c);
int		is_bloc(char **s, int a, int b, char c);
int		ft_strlen(char *s);

int		verif_sudoku(char **s)
{
	int		i;
	int		j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if ((!is_line(s, i, j, s[i][j]) ||
				!is_colonne(s, i, j, s[i][j]) || !is_bloc(s, i, j, s[i][j]) ||
				s[i][j] < '1' || s[i][j] > '9') && s[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
