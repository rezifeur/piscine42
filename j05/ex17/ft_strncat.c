/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 19:35:15 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/19 14:44:18 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	dest[i] = ' ';
	while (src[j] && i < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
