/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:03:20 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/19 15:08:19 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_words(char *str)
{
	int i;
	int word;
	int count;

	count = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			word = 1;
			i++;
		}
		if (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' || str[i] == '\0')
		{
			count += (word = 1) ? 1 : 0;
			word = 0;
			i++;
		}
	}
	return (count);
}

int		ft_lw(int i, char *str)
{
	int c;

	c = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		c++;
		i++;
	}
	return (c);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		oi;
	int		k;
	char	**out;

	k = 0;
	i = 0;
	oi = 0;
	if ((out = malloc(sizeof(char *) * (ft_count_words(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
		{
			if ((out[oi] = malloc(sizeof(char) * (ft_lw(i, str) + 1))) == NULL)
				return (NULL);
			k = 0;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				out[oi][k++] = str[i++];
			out[oi++][k] = '\0';
		}
	}
	return (out);
}
