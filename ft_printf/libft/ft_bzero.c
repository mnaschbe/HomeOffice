/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:56:43 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 13:26:58 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memoryset(void *str, int c, size_t a)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < a)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	int	val;

	val = 0;
	ft_memoryset(s, val, n);
}

/*int	main()
{
	char s[] = "abcdefg";
	int n = 6;

	ft_bzero(s, n);
	printf("*%s* \n", s);
}*/
