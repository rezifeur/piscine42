/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 14:12:58 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/13 14:12:59 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int number;
	int negative;

	i = 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\r') || (str[i] == '\n') ||
		(str[i] == '\f') || (str[i] == '\v') || (str[i] == '\t'))
		i++;
	if (str[i] == 45)
		negative = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	if (negative == 1)
		return (-number);
	else
		return (number);
}
