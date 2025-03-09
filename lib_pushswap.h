/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_pushswap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:27:19 by jemustaj          #+#    #+#             */
/*   Updated: 2025/03/09 22:14:46 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // POiSTA TAMA ENNEN PALAUTUSTA

typedef struct s_node
{
	int	nbr;

	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

int	main(int argc, char **argv);
char	**ft_split(char *str, char separator);

#endif
