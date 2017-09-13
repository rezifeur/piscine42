/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_case_ok.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 12:50:21 by cbrian            #+#    #+#             */
/*   Updated: 2017/09/09 22:32:15 by cbrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		is_line(char **sudoku, int i, int j, char v);
int		is_colonne(char **sudoku, int i, int j, char v);
int		is_bloc(char **sudoku, int i, int j, char v);

int		is_case_ok(char **s, int position)
{
	int		i;
	int		j;
	char	k;

	if (position == 81)
		return (1);
	i = position / 9;
	j = position % 9;
	if (s[i][j] != '.')
		return (is_case_ok(s, position + 1));
	k = '1';
	while (k <= '9')
	{
		if (is_line(s, i, j, k) && is_colonne(s, i, j, k) &&
			is_bloc(s, i, j, k))
		{
			s[i][j] = k;
			if (is_case_ok(s, position + 1))
				return (1);
		}
		k++;
	}
	s[i][j] = '.';
	return (0);
}
