/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_bloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 13:41:51 by julevy            #+#    #+#             */
/*   Updated: 2017/09/10 22:51:07 by cbrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_bloc(char **sudoku, int line_val, int col_val, char valeur)
{
	int i;
	int j;
	int bv;
	int bh;

	bh = line_val / 3;
	bv = col_val / 3;
	i = bh * 3;
	while (i <= (bh * 3 + 2))
	{
		j = bv * 3;
		while (j <= (bv * 3 + 2))
		{
			if (sudoku[i][j] == valeur && (!(i == line_val && j == col_val)))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
