/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:11:08 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/10/17 15:02:51 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

size_t	ft_ptr_len(uintptr_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_print_ptr(uintptr_t nb)
{
	unsigned int	nb_len;

	nb_len = 0;
	if (nb >= 16)
	{
		ft_print_ptr(nb / 16);
		ft_print_ptr(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar_fd(nb + '0', 1);
		else
			ft_putchar_fd(nb - 10 + 'a', 1);
	}
	nb_len += ft_ptr_len(nb);
	return (nb_len);
}
// static int	ft_print_ptr(uintptr_t nb)
// {
// 	if (nb >= 16)
// 	{
// 		ft_print_ptr(nb / 16);
// 		ft_print_ptr(nb % 16);
// 	}
// 	if (nb < 16)
// 	{
// 		if (nb <= 9)
// 			ft_putchar_fd(nb + 48, 1);
// 		else
// 			ft_putchar_fd(nb - 10 + 'a', 1);
// 	}
// 	return (nb);
// }

int	ft_putptr(uintptr_t nb)
{
	int	nb_len;

	nb_len = 0;
	if (nb == 0)
	{
		write (1, "(nil)", 5);
		nb_len += 5;
	}
	else
	{
		write(1, "0x", 2);
		nb_len += 2;
		nb_len += ft_ptr_len(nb);
		ft_print_ptr(nb);
	}
	return (nb_len);
}
