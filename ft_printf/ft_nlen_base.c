/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlen_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:03:50 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/10/13 23:32:14 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t	ft_nlen_base(long long int n, size_t base)
{
	size_t	i;

	i = 1;
	while (n >= (long long int)base)
	{
		n /= base;
		i++;
	}
	return (i);
}
