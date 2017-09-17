/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 16:19:45 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/14 17:22:57 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	str = ft_strlowcase(str);
	if (str[0] <= 122 && str[0] >= 97)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if ((str[i - 1] >= 32) && (str[i - 1] <= 47) &&
				(str[i] >= 97) && (str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
