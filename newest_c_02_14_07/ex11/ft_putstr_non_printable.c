/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munaschb <munaschb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:43:19 by munaschb          #+#    #+#             */
/*   Updated: 2024/07/14 14:55:52 by munaschb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhex(int x)
{
	if (x == 0)
		write(1, "0", 1);
	if (x >= 16)
	{
		ft_printhex(x / 16);
		ft_printhex(x % 16);
	}
	else
	{
		if (x <= 9)
			ft_putchar(x + '0');
		else
		{
			ft_putchar('0');
			ft_putchar('a' - x + 10);
		}
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			ft_putchar('\\');
			ft_printhex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
