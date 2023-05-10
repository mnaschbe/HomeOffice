/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:55:12 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/05/08 14:55:14 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strdup(char *src)
{
    char *new;
    int i;

    i = 0;
    if (!(new = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
        return NULL;
    while (src[i])
        {
            new[i] = src[i];
            i++;
        }
        new[i] = '\0';
        return (new);
}

int main (int ac, char **av)
{
    int i;
    char    *new;

    i = 1;
    if(ac)
    {
        while(i != ac)
        {
            printf("Original:\n\n    %s\n\n", av[i]);
        	new = strdup(av[i]);
	        printf("Auto_copy:\n\n    %s\n\n", new);
        	new = ft_strdup(av[i]);
        	printf("Man_copy:\n\n    %s\n\n", new);
            i++;
            printf("__________\n\n");
        }
    }
    return(0);
}

