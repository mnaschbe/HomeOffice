/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:35:47 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/04/24 15:04:29 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putlong_nbr(long int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putlong_nbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putlong_nbr(nb / 10);
		ft_putlong_nbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putnbr(int nb)
{
	ft_putlong_nbr(nb);
}
/*int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/
