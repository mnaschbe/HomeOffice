/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:43:48 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 18:18:55 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*fas)(unsigned int, char))
{
	unsigned int	index;
	char			*c;
	unsigned int	a;

	if (!s || !fas)
		return (NULL);
	index = 0;
	a = 0;
	while (s[a] != '\0')
		a++;
	c = (char *)malloc(a + 1);
	if (!c)
		return (NULL);
	while (index < a)
	{
		c[index] = fas(index, s[index]);
		index++;
	}
	c[a] = '\0';
	return (c);
}

char	fas(unsigned int n, char c)
{
	n = 0;
	if (n != 0)
		return (c);
	return (c);
}

/*int	main(void)
{
	char *s = "HELLO WORLD";
	char *result = ft_strmapi(s, fas);
	if (result)
	{
		printf("%s\n", result);
		free(result); // Free the dynamically allocated result
	} else {
		printf("Error: Memory allocation failed.\n");
	}

	return (0);
}*/
