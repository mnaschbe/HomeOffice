/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:27:43 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/27 18:12:33 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*char	*ft_malloc(char *s, int i, int a)
{
	s = malloc(sizeof(char) * i + a);
	return (s);
}

char	**scntr(const char *s, char c)
{
	char	**array;
	int		i;
	int		x;

	i = 0;
	x = 0;
	while(s)
	{
		array[a][x] = s[x];
		if(s[x] == c)
		{
			*array[a] = ft_malloc(*array[a], x, i);
			i++;
			s[x] = NULL;
		}
		x++;
		a++;
	}
	return (*array);
}

int	count(const char *s, char c)
{
	int		i;
	int		i;
	int		x;
	size_t	i;
	char	*s;
	size_t	j;
	int		j;
	char	c;

	i = 0;
	while(s)
	{
		array;
	i = 0;
	x = 0;
	while(s)
	{
		array[a][x] = s[x];
		if(s[x] == c)
		{
			*array[a] = ft_malloc(*array[a], x, i);
			i++;
			s[x] = NULL;
		}
		x++;
		a++;
	}
	return (*array);
}*//*
char	**ft_free(char *list)
{
	j = 0;
	while (list[j])
	{
		c = list[j];
		free(c);
		j++;
	}
	free(list);
	return (NULL);
}

static int	number_of_delimeters_to_skip(char *trimed_str, char dlm)
{
	int	count;

	count = 0;
	while (*trimed_str == dlm)
	{
		count++;
		trimed_str++;
	}
	return (count);
}

static char	**split(char *trimed_str, char dlm, int word_count)
{
	int		count;
	char	**final_array;
	char	*start;

	count = 0;
	final_array = (char **)malloc((word_count + 1) * sizeof(char *));
	if (final_array == NULL)
		return (NULL);
	while (count < word_count)
	{
		start = trimed_str;
		while (*trimed_str != dlm && *trimed_str)
			trimed_str++;
		final_array[count] = (char *)malloc(trimed_str - start + 1);
		if (!(final_array[count]))
			ft_free(final_array);
		ft_strlcpy(final_array[count], start, trimed_str - start + 1);
		count++;
		trimed_str = trimed_str + number_of_delimeters_to_skip(trimed_str, dlm);
	}
	final_array[count] = 0;
	return (final_array);
}

size_t	ft_wordcount(char const *s, char c)
{
	size_t	listsize;
	size_t	i;

	i = 0;
	if (ft_strlen(s) == 0)
		return (0);
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || (s[i] == c && s[i + 1] != '\0' && s[i
				+ 1] != c))
			listsize++;
		i++;
	}
	return (listsize);
}

char	**ft_split(char const *str, char dlm)
{
	int		word_count;
	char	*trimed_str;
	char	**result;
	char	delimiter;
	char	**token;
	int		i;
	int		i;
	int		trigger;
	size_t	i;
	size_t	trigger;

	trimed_str = ft_strtrim(str, &dlm);
	if (trimed_str == NULL)
		return (NULL);
	word_count = ft_wordcount((char *)trimed_str, dlm);
	result = split(trimed_str, dlm, word_count);
	free(trimed_str);
	return (result);
}*/
/*int	main(void)
{
	const char text[] = "Hello,World,How,Are,You";
	delimiter = ',';
	token = ft_split(text, delimiter);
	i = 0;
	while (token[i])
	{
		printf("%s", token[i]);
		printf("\n");
		i++;
	}
	while (token != NULL)
	{
		printf("%s\n", token);
		token = ft_split(NULL, delimiter);
}*/
static int	count_words(const char *str, char c)
{
	int		i;
	int		trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
