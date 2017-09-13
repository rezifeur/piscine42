/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_colonne.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 12:37:38 by cbrian            #+#    #+#             */
/*   Updated: 2017/09/09 22:00:22 by cbrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_colonne(char **sudoku, int line_val, int col_val, char valeur)
{
	int		k;

	k = 0;
	while (k < 9)
	{
		if (sudoku[k][col_val] == valeur && k != line_val)
			return (0);
		k++;
	}
	return (1);
}
