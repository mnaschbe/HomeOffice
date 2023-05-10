/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:02:21 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/05/10 14:45:11 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_strlen(char *s)
{
	int i;
	
	if(s[i] == '\0')
		return i;
	else
		return ft_strlen(s + 1);
}

char	*search_and_replace(char *s1, char *s2, char *s3)
{
	int i;
	int j;
	int b;
	int a;

	a = ft_strlen(s1)
	j = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[j])
		{
			while (s1[i] == s2[j])
			{
				s1[i] = s3[j];
				i++;
			}
			if (ft_strlen((s1) - 1) == s2[i])
				s1[i] = s3[i];
		}
		return s1;
	}
	if (s1[i] != s2[j])
		return (s1);
	return 0;
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		search_and_replace(av[1], av[2], av[3]);
		printf("%s", av[1]);
	}
	else
		printf("\n");			
	return 0;
}
