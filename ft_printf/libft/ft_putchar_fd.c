/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:53:31 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 13:25:33 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char a = 'a';
	int fd;

	open("/nfs/homes/mnaschbe/ProTee/Teepot/COMMON CORE/libft/test.txt",
		O_RDWR | O_TRUNC | O_CREAT | S_IRWXO, 0640);

	fd = open("test.txt", O_RDWR | O_TRUNC);
	ft_putchar_fd(a, fd);
	return (0);
}*/