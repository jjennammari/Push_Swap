/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 21:04:39 by jemustaj          #+#    #+#             */
/*   Updated: 2025/03/08 22:21:02 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_pushswap.h"

int	main(void)
{
	t_node	*root;

	root = malloc(sizeof(t_node));
	root->nbr = 42;
	root->prev = NULL;

	root->next = malloc(sizeof(t_node));
	root->next->nbr = 34;
	root->next->prev = root;

	root->next->next = malloc(sizeof(t_node));
	root->next->next->nbr = 53;
	root->next->next->prev = root->next;

	root->next->next->next = malloc(sizeof(t_node));
	root->next->next->next->nbr = -2;
	root->next->next->next->prev = root->next->next;
	root->next->next->next->next = NULL;

	t_node	*current;

	current = root;
	while (current != NULL)
	{
		printf("%d\n", current->nbr);
		current = current->next;
	}
	return (0);
}
