/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:02:47 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 18:20:20 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n > ft_strlen(s1))
		n = ft_strlen(s1) + 1;
	if (n > ft_strlen(s2))
		n = ft_strlen(s2) + 1;
	return (ft_memcmp(s1, s2, n));
}

/*int	main(void)
{
	printf("%d", ft_strncmp("Hello", "HelloWorld", 6));
}*/
