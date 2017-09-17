/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 18:37:49 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/14 14:26:18 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int cmp;

	i = 0;
	cmp = 0;
	while (1 != 2)
	{
		cmp += (s1[i] - s2[i]);
		if (i >= n)
			return (cmp);
		if (s1[i] == s2[i] && s2[i] == '\0')
			return (cmp);
		if (s1[i] == s2[i])
			i++;
		else
			return (cmp);
	}
}
