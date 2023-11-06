/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:11:39 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/10/17 15:03:07 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	check_type(va_list args, const char input)
{
	int	i;

	i = 0;
	if (input == 'c')
		i += ft_print_char(va_arg(args, int));
	else if (input == 's')
		i += ft_print_str(va_arg(args, char *));
	else if (input == 'p')
		i += ft_putptr(va_arg(args, uintptr_t));
	else if (input == 'd')
		i += ft_print_nb(va_arg(args, int));
	else if (input == 'i')
		i += ft_print_nb(va_arg(args, int));
	else if (input == 'u')
		i += ft_print_unbr(va_arg(args, unsigned int));
	else if (input == 'x')
		i += ft_print_hex(va_arg(args, unsigned int), input);
	else if (input == 'X')
		i += ft_print_hex(va_arg(args, unsigned int), input);
	else if (input == '%')
		i += write(1, "%", 1);
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list			args;
	unsigned int	inputlen;
	unsigned int	i;
	unsigned int	b;

	b = 0;
	i = 0;
	inputlen = ft_strlen(input);
	va_start(args, input);
	while (b <= inputlen - 1)
	{
		if (input[b] == '%')
		{
			i += check_type(args, input[b + 1]);
			b++;
		}
		else
			i += write(1, &input[b], 1);
		b++;
	}
	va_end(args);
	return (i);
}
