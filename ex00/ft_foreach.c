/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <rvandepu@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:57:59 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/25 15:26:52 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

/*void	ft_putnbr(int i)
{
	char	c;

	if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
	}
	if (i > 9)
		ft_putnbr(i / 10);
	c = i % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	tab[5] = {5, -20, 8, 42, 0};

	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}*/
