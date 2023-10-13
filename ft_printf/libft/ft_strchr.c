/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:11:33 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 13:11:34 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (++i <= (int)ft_strlen(s))
		if (s[i] == (const char)c)
			return ((char *)&s[i]);
	return (NULL);
}

/*int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("The String after the |%s| is |%s|", av[2], ft_strchr(av[1],
				*av[2]));
	}
	return (0);
}*/
