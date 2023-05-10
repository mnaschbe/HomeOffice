/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:50:25 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/05/09 12:20:00 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_is_prime(int nb, int i)
{
	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= (nb / 2))
	{
		if ((nb % i != 0))
			return (1);
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	n;
	int	nb;

	nb = ;
	n = ft_is_prime(nb, n);
	if (n == 1)
		printf ("%d: The number %d is prime", ft_is_prime(nb, 2), nb);
	else
		printf ("%d: The number %d is not prime", ft_is_prime(nb, 2), nb);
}*/
