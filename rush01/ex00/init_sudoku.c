/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 14:01:21 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/10 22:18:23 by cbrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**init_sudoku(char **argv)
{
	int		k;
	int		i;
	char	**sudoku;

	k = 0;
	sudoku = (char **)malloc(sizeof(char *) * 10);
	while (argv[k])
	{
		sudoku[k] = (char *)malloc(sizeof(char) * 10);
		k++;
	}
	k = 0;
	while (k < 9)
	{
		i = 0;
		while (i < 9)
		{
			sudoku[k][i] = argv[k + 1][i];
			i++;
		}
		sudoku[k][i] = '\0';
		k++;
	}
	sudoku[k] = 0;
	return (sudoku);
}
