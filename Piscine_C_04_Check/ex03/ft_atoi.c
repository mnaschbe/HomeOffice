/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:51:43 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/05/04 18:24:03 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign = sign * -1;
		*str++;
	}
	while (*str >= '0' && *str <= '9')
	{	
		nb *= 10;
		nb += *str - 48;
		*str++;
	}
	return (nb * sign);
}
/*
int	main(void)
{
	char *s = "---+--+1234tzzt23";

	printf("%d", ft_atoi(s));
}*/
