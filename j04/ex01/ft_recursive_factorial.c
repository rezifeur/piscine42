/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:16:19 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/18 17:16:27 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb == 1) || (nb == 0))
		return (1);
	if (nb >= 13)
		return (0);
	if (nb >= 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
	return (0);
}
