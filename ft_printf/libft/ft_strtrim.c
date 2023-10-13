/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:35:55 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 18:14:40 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s;
	int		start;
	int		end;
	char	*result;
	int		i;

	s = (char *)s1;
	start = 0;
	end = ft_strlen(s) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	result = (char *)malloc(end - start + 2);
	if (!result)
		return (NULL);
	i = 0;
	while (start <= end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}

/*int	main(void)
{
	const char	*originalString;
	const char	*setofcharactersToTrim;
	char		*trimmedString;

	originalString = "   Hello, world!   ";
	setOfCharactersToTrim = " ";
	trimmedString = ft_strtrim(originalString, setOfCharactersToTrim);
	if (trimmedString)
	{
		printf("Original String: \"%s\"\n", originalString);
		printf("Trimmed String: \"%s\"\n", trimmedString);
		free(trimmedString);
		// Don't forget to free the allocated memory when done
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}*/