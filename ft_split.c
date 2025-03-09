/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:12:42 by jemustaj          #+#    #+#             */
/*   Updated: 2025/03/09 23:31:15 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_split(char *str, char separator) // change str to char const ?
{
	t_node	*dest;

	if (str == NULL || *str == '\0')
		return (NULL);
	1. calculate the size and malloc to dest;
	dest = malloc(sizeof(
}
