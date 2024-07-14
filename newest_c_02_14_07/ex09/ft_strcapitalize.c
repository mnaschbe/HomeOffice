/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munaschb <munaschb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:09:36 by munaschb          #+#    #+#             */
/*   Updated: 2024/07/14 14:58:53 by munaschb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (1);
	return (0);
}

int	islowercase(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	sw;

	sw = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (islowercase(str[i]) == 1)
		{
			if (sw == 1)
				str[i] -= 32;
			sw = 0;
		}
		else if (isalnum(str[i]) == 1)
			sw = 0;
		else
			sw = 1;
		i++;
	}
	return (str);
}
