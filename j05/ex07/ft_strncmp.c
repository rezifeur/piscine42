/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 18:37:49 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/13 18:57:11 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int cmp;

	i = 0;
	cmp = 0;
	while (1 != 2)
	{
		cmp += (s1[i] - s2[i]);
		if (i >= (int)n - 1)
			return (cmp);
		if (s1[i] == s2[i] && s2[i] == '\0')
			return (cmp);
		if (s1[i] == s2[i])
			i++;
		else 
			return (cmp);
	}
}

int		main(void)
{
	char ss1[6] = "abcdef";
	char ss2[6] = "Abcdef";
	char ss3[6] = "abcdef";
	int ret;

	ret = ft_strncmp(ss1, ss2, 3);
	printf("%d\n", ret);

	ret = strncmp(ss2, ss3, 3);
	printf("%d", ret);
	return (0);
}
