/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:11:08 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/10/16 18:11:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

size_t	ft_hexnumberlen(unsigned int n)
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

int	putzero(void)
{
	write(1, "0", 1);
	return (1);
}

int	ft_print_hex(unsigned int nb, int format)
{
	unsigned int	nb_len;

	nb_len = 0;
	if (nb == 0)
		return (putzero());
	if (nb >= 16)
	{
		ft_print_hex(nb / 16, format);
		ft_print_hex(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			ft_putchar_fd(nb + '0', 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd(nb - 10 + 'a', 1);
			else if (format == 'X')
				ft_putchar_fd(nb - 10 + 'A', 1);
		}
	}
	nb_len += ft_hexnumberlen(nb);
	return (nb_len);
}
