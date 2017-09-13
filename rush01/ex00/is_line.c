/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 12:31:21 by cbrian            #+#    #+#             */
/*   Updated: 2017/09/09 22:00:12 by cbrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_line(char **sudoku, int line_val, int col_val, char valeur)
{
	int		k;

	k = 0;
	while (k < 9)
	{
		if (sudoku[line_val][k] == valeur && k != col_val)
			return (0);
		k++;
	}
	return (1);
}
