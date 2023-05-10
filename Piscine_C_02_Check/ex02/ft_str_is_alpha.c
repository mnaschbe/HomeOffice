/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:17:12 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/05/01 11:21:43 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf ("%d", ft_str_is_alpha("abcdefghijklmnopqrstuvwxyz"));
	printf ("\n%d", ft_str_is_alpha("abcdefghijklmnopqrs12uvwxyz"));
	printf ("\n%d", ft_str_is_alpha("abcdefghijklmnopqldsjfhlsdkjfz"));
	printf ("\n%d", ft_str_is_alpha("abcdefghijklmnopqr233z"));
}*/
