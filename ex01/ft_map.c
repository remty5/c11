/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <rvandepu@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:27:30 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/26 15:27:36 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_tab;
	int	i;

	new_tab = malloc(sizeof (int) * length);
	if (new_tab == NULL)
		return (NULL);
	i = -1;
	while (++i < length)
		new_tab[i] = f(tab[i]);
	return (new_tab);
}
