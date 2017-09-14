/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 20:14:50 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/14 20:38:52 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int 			i;
	int				j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	while (dest[k] != '0')
		k++;
	return (k);
}

int		main(void)
{
	char str1[] = "lol";
	char str2[] = "mdr";
	char str3[] = "lol";
	char str4[] = "mdr";

	printf("%u\n", ft_strlcat(str1, str2, 2));
	printf("%lu", strlcat(str3, str4, 2));
	return 0;
}
