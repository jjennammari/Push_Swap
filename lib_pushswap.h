/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_pushswap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:27:19 by jemustaj          #+#    #+#             */
/*   Updated: 2025/03/08 22:18:12 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PUSHSWAP_H
# define LIB_PUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // POSTA TAMA ENNEN PALAUTUSTA

typedef struct s_node
{
	int	nbr;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

int	main(void);

#endif
