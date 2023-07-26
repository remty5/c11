/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <rvandepu@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:40:32 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/26 15:43:38 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
	}
	if (s1[i])
		return (1);
	else if (s2[i])
		return (-1);
	else
		return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		l;
	int		j;
	int		m;
	void	*p;

	i = 0;
	while (tab[i])
		i++;
	l = i;
	i = 0;
	while (i < l)
	{
		j = i;
		m = i;
		while (j < l)
			if (ft_strcmp(tab[j++], tab[m]) < 0)
				m = j - 1;
		p = tab[i];
		tab[i] = tab[m];
		tab[m] = p;
		i++;
	}
}
