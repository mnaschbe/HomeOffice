/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:23:46 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 13:27:06 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
/**
void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
*/

void	*ft_calloc(size_t mem, size_t size)
{
	void	*array;
	size_t	ttlsize;

	ttlsize = size * mem;
	if (size != 0 && ttlsize / size != mem)
		return (NULL);
	array = malloc (mem * size);
	if (array == 0)
		return (array);
	ft_bzero (array, mem * size);
	return (array);
}

/*int main() 
{
    int *myArray = ft_calloc(5, sizeof(int));

    if (myArray == NULL) 
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Element 0: %d\n", myArray[0]);
    printf("Element 1: %d\n", myArray[1]);
    printf("Element 2: %d\n", myArray[2]);
    printf("Element 3: %d\n", myArray[3]);
    printf("Element 4: %d\n", myArray[4]);

    free(myArray);

    return 0;
}*/
