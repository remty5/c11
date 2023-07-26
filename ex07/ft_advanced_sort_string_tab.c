/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <rvandepu@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:55:11 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/26 16:25:59 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	void	*p;

	i = 0;
	while (tab[i])
		i++;
	while (i > 0)
	{
		j = 0;
		while (++j < i)
		{
			if (cmp(tab[j - 1], tab[j]) > 0)
			{
				p = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = p;
			}
		}
		i--;
	}
}
