/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 12:59:44 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/10 13:26:12 by cbrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_sudoku(char **sudoku)
{
	int k;
	int i;

	k = 0;
	while (sudoku[k])
	{
		i = 0;
		while (i < 9)
		{
			ft_putchar(sudoku[k][i]);
			if (i < 8)
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		k++;
	}
}
