/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:24:01 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/19 19:54:41 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

char	**ft_sort_params(char **params, int cparams)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < cparams)
	{
		if (ft_strcmp(params[i], params[i + 1]) > 0)
		{
			tmp = params[i];
			params[i] = params[i + 1];
			params[i + 1] = tmp;
			i = 1;
		}
		else
			i++;
	}
	return (params);
}

int		main(int argc, char **argv)
{
	int		i;
	char	**parsed;

	i = 1;
	if (argc == 1)
		return (0);
	parsed = ft_sort_params(argv, argc - 1);
	while (parsed[i])
	{
		ft_putstr(parsed[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
