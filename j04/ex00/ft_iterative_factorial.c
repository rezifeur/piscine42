/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 15:48:18 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/13 11:49:41 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;

	n = nb;
	if ((nb == 1) || (nb == 0))
		return (1);
	if (nb >= 13)
		return (0);
	if (nb >= 0)
	{
		while ((nb - 1) >= 1)
		{
			n = n * (nb - 1);
			nb--;
		}
		return (n);
	}
	else
		return (0);
}
