/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguintin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 21:09:30 by nguintin          #+#    #+#             */
/*   Updated: 2017/09/19 21:34:45 by nguintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(x) (!((x) % 2))
# define TRUE	1
# define FALSE	0
# define SUCCESS	0
# define ODD_MSG	"I have an odd number of arguments.\n"
# define EVEN_MSG "I have an even number of arguments.\n"

typedef int	t_bool;
#endif
