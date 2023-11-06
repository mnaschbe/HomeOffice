/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:35:17 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/10/16 20:44:59 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static size_t	ft_unlen(unsigned int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_unlen(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_print_unbr(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	num = ft_uitoa(n);
	len = ft_print_str(num);
	free(num);
	return (len);
}
