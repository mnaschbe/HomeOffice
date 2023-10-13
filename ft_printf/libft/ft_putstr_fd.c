/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:22:48 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 13:24:38 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i != ft_strlen(s))
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*int	main(void)
{
	char *s = "AMIGO";
	int fd;

	fd = open("test.txt", O_RDWR | O_TRUNC);
	ft_putstr_fd(s, fd);
	return (0);
}*/
