/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:11:08 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/10/13 23:36:47 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_print_hex(unsigned nb , int format)
{
	const char		*base;
	int				i;
	unsigned int	base_len;
	int				nb_len;
	
	base_len = ft_strlen(base);
	i = 0;
	nb_len = 0;
	if (format == 'p')
	{
		write(1, "0x", 2);
		nb_len += 2;
	}
    if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (format == 'p')
	{
		write(1, "0x", 2);
		nb_len += 2;
	}
    if (nb >= base_len)
	{
        ft_putnbr_base((nb / 16), base);
        ft_putnbr_base((nb % 16), base);
	}
	else
		ft_putchar_fd(&base[nb], 1);
	nb_len += ft_unbrlen_base(nb, base_len);
	return(nb_len);
}
