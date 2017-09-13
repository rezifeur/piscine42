/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 19:31:24 by cbrian            #+#    #+#             */
/*   Updated: 2017/09/10 23:21:06 by cbrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
char	**init_sudoku(char **argv);
void	print_sudoku(char **s);
int		is_case_ok(char **s, int position);
int		verif_sudoku(char **s);
void	free_sudo(char **s);
int		verif_argv(char **s);

int		main(int argc, char **argv)
{
	char	**sudoku;
	int		i;

	i = 0;
	if (argc != 10 || !verif_argv(argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	sudoku = init_sudoku(argv);
	if (!verif_sudoku(sudoku))
	{
		ft_putstr("Error\n");
		free_sudo(sudoku);
		return (0);
	}
	else if (is_case_ok(sudoku, 0))
		print_sudoku(sudoku);
	else
		ft_putstr("Error\n");
	free_sudo(sudoku);
	return (0);
}
