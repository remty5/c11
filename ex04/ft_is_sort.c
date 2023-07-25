/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <rvandepu@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:18:07 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/25 18:40:56 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	a;
	int	d;

	i = 0;
	a = 1;
	while (++i < length)
		if (f(tab[i - 1], tab[i]) > 0)
			a = 0;
	i = 0;
	d = 1;
	while (++i < length)
		if (f(tab[i - 1], tab[i]) < 0)
			d = 0;
	return (a || d);
}
