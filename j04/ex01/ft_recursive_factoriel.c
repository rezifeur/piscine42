/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factoriel.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 15:48:18 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/16 19:06:06 by mlantonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factoriel(int nb)
{
	if ((nb == 1) || (nb == 0))
		return (1);
	if (nb >= 13)
		return (0);
	if (nb >= 0)
	{
		return (nb * ft_recursive_factoriel(nb - 1));
	}
	else
		return (0);
	return (0);
}

COUCOU PETIT NICOLAS ALORS C'ETAIT BIEN LA FLIP PARTY PETIT FDP?????????????
