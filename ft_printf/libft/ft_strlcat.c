/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:04:20 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/29 15:27:55 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lens;
	size_t	lend;

	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	if (size <= lend)
		return (lens + size);
	else
		ft_strncat(dst, (char *)src, size - lend - 1);
	return (lend + lens);
}
