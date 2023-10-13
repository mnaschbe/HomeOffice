/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:58:13 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 18:18:39 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define AC_BLACK "\x1b[30m"
#define AC_RED "\033[0;31m"
#define AC_GREEN "\x1b[32m"
#define AC_YELLOW "\x1b[33m"
#define AC_BLUE "\x1b[34m"
#define AC_MAGENTA "\x1b[35m"
#define AC_CYAN "\x1b[36m"
#define AC_WHITE "\x1b[37m"
#define AC_NORMAL "\x1b[m"

#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	j = 0;
	len = 0;
	while (dest[j] != '\0')
	{
		len++;
		j++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		ps_len;
	int		ss_len;
	int		ttl_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ss_len = ft_strlen((char *)s1);
	ps_len = ft_strlen((char *)s2);
	ttl_len = ss_len + ps_len;
	new_str = (char *)malloc((ttl_len + 1) * sizeof(char));
	if (!(new_str))
		return (NULL);
	ft_strcpy(new_str, (char *)s1);
	ft_strncat(new_str, (char *)s2, ttl_len);
	return (new_str);
}

/*int	main(void)
{
	const char *str1 = "Hello, ";
	const char *str2 = "world!";

	char *result = ft_strjoin(str1, str2);

	if (result)
	{
		printf("%sConcatenated string: %s\n", AC_GREEN, result);
		free(result); // Don't forget to free the allocated memory when done
	}
	else
	{
		printf("%sMemory allocation failed.\n", AC_RED);
	}

	return (0);
}*/
