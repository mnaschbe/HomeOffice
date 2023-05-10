/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:32:43 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/05/08 18:32:45 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(long int nb)
{
	long	index;

	if (nb > 2147483646)
	{
		return (0);
	}
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	index = 2;
	while (nb >= 2)
	{
		if (index * index == nb)
		{
			return (index);
		}
		index++;
	}
	return (0);
}
/*
int main()
{
    printf("The Squareroot of %d is = %d", 2500, ft_sqrt(2500));
    return(0);
}*/
