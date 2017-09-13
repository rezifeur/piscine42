/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 17:39:54 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/13 18:30:51 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
int		ft_strcmp(char *s1, char *s2)
{
	int	cmp;
	int	i;

	i = 0;
	cmp = 0;
	while (1 != 2)
	{
		cmp += (s1[i] - s2[i]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (cmp);
		if (s1[i] == s2[i])
			i++;
		else
			return (cmp);
	}
}

int		main(void)
{
	char ss1[10] = "abcdefghiJ";
	char ss2[10] = "abcdefghiJ";
	char ss3[10] = "abcdefghiJ";
	
	int ret;

	ret = ft_strcmp(ss1, ss2);
	printf("%d\n", ret);
	ret = strcmp(ss2, ss3);
	printf("%d", ret);
	return (0);
}
