/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:24:50 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 18:18:06 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (p_dst);
	if (dst >= src)
		while (len--)
			p_dst[len] = p_src[len];
	else
	{
		while (len--)
		{
			*p_dst = *p_src;
			p_src++;
			p_dst++;
		}
	}
	return (dst);
}
