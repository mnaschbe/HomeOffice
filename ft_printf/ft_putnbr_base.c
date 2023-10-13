/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:27:31 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/10/13 23:04:44 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(long long int nbr, char *base)
{
	int	base_len;
	int	i;

	i = 0;
	base_len = ft_strlen(base);
    
    if (nbr == atoi("-9223372036854775807"))
	{
		write(1, "-9223372036854775807", 20);
		return (20);
	}
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			i += ft_putnbr_base(-nbr, base);
		}
		if (nbr >= base_len)
		{
			ft_putnbr_base(nbr / base_len, base);
			ft_putnbr_base(nbr % base_len, base);
		}
        else
			ft_putchar_fd(base[nbr], 1);
        i += ft_nlen_base(nbr, base_len);
        return(i);
	}
}