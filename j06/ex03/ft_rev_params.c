/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 15:51:19 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/19 19:54:28 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argc > 1)
	{
		while (argv[argc - 1][i] != '\0')
		{
			ft_putchar(argv[argc - 1][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		argc--;
	}
	return (0);
}
