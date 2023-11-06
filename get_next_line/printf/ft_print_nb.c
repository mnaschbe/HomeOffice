/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:36:22 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/10/16 16:14:58 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_print_nb(int n)
{
	size_t	len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	while (len != ft_strlen(num))
	{
		ft_putchar_fd(num[len], 1);
		len++;
	}
	free(num);
	return (len);
}
