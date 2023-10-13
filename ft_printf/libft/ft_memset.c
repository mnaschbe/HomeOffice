/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:33:39 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 13:25:54 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	*ft_memset(void *str, int c, size_t a)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < a)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	unsigned char	c;
	int				B;

	char str[] = "NIGGAHH";
	c = 'N';
	B = 3;
	ft_memset(str, c, B);
	ft_putstr(str);
}*/
