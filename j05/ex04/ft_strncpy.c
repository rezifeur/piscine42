/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 20:18:27 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/19 20:18:45 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
