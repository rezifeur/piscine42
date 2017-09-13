/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 15:53:15 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/02 18:24:28 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_is_negative(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
