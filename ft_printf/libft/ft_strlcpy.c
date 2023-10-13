/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:47:23 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 13:05:03 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = ft_strlen(src);
	if (size == 0)
		return (count);
	count = 0;
	while (src[count] != '\0' && count < (size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	count = ft_strlen(src);
	return (count);
}

/*int	main(void)
{
	char s1[] = "ONESIX";
	char s2[] = "TESEST";

	printf("%i \n", ft_strlcpy(s1, s2, 6));

}*/
