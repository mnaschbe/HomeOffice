/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:05:45 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/04/20 19:07:44 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_numbers(void)

{
	char	x;

	x = '0';
	while (x <= '9')
	{
		write (1, &x, 1);
		x++;
	}
}