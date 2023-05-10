/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:46:15 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/04/26 19:52:08 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[6];
	int	size;

	tab[0] = 7;
	tab[1] = 6;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 2;
	tab[5] = 5;
	size = 6;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d", tab[0], tab[1], tab[2]);
	printf("%d, %d, %d", tab[3], tab[4], tab[5]);
	return (0);
}*/
