/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <rvandepu@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:34:25 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/26 14:57:09 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	ft_putnbr(int nb)
{
	int	a;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		a = nb % 10 + 48;
		if (nb / 10 != 0)
			ft_putnbr(nb / 10);
		write(1, &a, 1);
	}
}

int	ft_atoi(char *str)
{
	int				n;
	int				s;
	unsigned int	i;

	n = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
		n = (n * 10) + (str[i++] - '0');
	return (n * s);
}

int	main(int argc, char *argv[])
{
	int	(*f[128])(int, int);
	int	i;

	i = 0;
	while (i < 128)
		f[i++] = NULL;
	f['+'] = &ft_sum;
	f['-'] = &ft_diff;
	f['/'] = &ft_div;
	f['*'] = &ft_prod;
	f['%'] = &ft_mod;
	if (argc == 4)
	{
		if (f[(int)*argv[2]] && argv[2][1] == '\0'
			&& ((*argv[2] != '/' && *argv[2] != '%') || ft_atoi(argv[3])))
			ft_putnbr(f[(int)*argv[2]](ft_atoi(argv[1]), ft_atoi(argv[3])));
		else if (*argv[2] == '/' && !ft_atoi(argv[3]))
			write(1, "Stop : division by zero", 23);
		else if (*argv[2] == '%' && !ft_atoi(argv[3]))
			write(1, "Stop : modulo by zero", 21);
		else
			write(1, "0", 1);
		write(1, "\n", 1);
	}	
}
