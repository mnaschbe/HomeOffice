/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:22:17 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/05/05 10:52:33 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(int nbr, int bv, char *base)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= bv)
	{
		ft_printnbr(n / bv, bv, base);
	}
	ft_putchar(base[n % bv]);
}

int	ft_doubles(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (*(base + i))
	{
		j = i + 1;
		while (*(base + j))
		{
			if (*(base + i) == *(base + j))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bv;

	bv = 0;
	while (base[bv])
	{
		if (base[bv] == '+' || base[bv] == '-')
			return ;
		++bv;
	}
	if (bv < 2)
		return ;
	if (ft_doubles(base))
		return ;
	ft_printnbr(nbr, bv, base);
}
/*
int	main(void)
{
	ft_putnbr_base(-21, "01");
	printf("\n");
	ft_putnbr_base(-23, "poneyvif");
	printf("\n");
	ft_putnbr_base(31212, "0123456789");
	printf("\n");
	ft_putnbr_base(42, "0123456789abcdef");
}*/
