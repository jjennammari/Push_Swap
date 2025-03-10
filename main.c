/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:43:39 by jemustaj          #+#    #+#             */
/*   Updated: 2025/03/09 21:57:08 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	if ((argc == 1) || (argv == 2 && argv[1][0] == NULL))
		return (NULL);
	if (argc == 2)
		argv = ft_split(argv, ' ');
	return (0);
}
