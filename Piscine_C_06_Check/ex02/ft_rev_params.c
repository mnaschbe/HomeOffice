/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:27:35 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/05/07 14:58:24 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_params(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	j = ac - 1;
	while (j >= 1)
	{
		while (av[j][i])
		{
			ft_rev_params(av[j][i]);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
