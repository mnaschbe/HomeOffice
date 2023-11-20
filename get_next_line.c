/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezararsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:24:24 by ezararsi          #+#    #+#             */
/*   Updated: 2023/06/09 12:24:25 by ezararsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
#endif

static int	reset_buffer(int fd, char *buffer, int *bytes_read)
{
	*bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (*bytes_read <= 0)
	{
		return (-1);
	}
	buffer[*bytes_read] = '\0';
	return (0);
}

static int	get_line_length(char *buffer, int bytes_read, int pos)
{
	int	i;

	i = pos;
	while (i < bytes_read && buffer[i] != '\n')
		i++;
	return (i);
}

static char	*copy_buffer_to_line(char *line, char *buffer, int pos, int i)
{
	char	*temp;

	if (line)
		temp = malloc(ft_strlen(line) + i - pos + 2);
	else
		temp = malloc(i - pos + 2);
	if (line)
	{
		ft_strcpy(temp, line);
		free(line);
	}
	else
	{
		temp[0] = '\0';
	}
	ft_strncat(temp, buffer + pos, i - pos + 1);
	return (temp);
}

static void	update_pos(int *pos, int i, int bytes_read, char *buffer)
{
	if (i < bytes_read && buffer[i] == '\n')
		*pos = i + 1;
	else if (i == bytes_read)
		*pos = 0;
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	static int	pos = 0;
	static int	bytes_read = 0;
	char		*line;
	int			i;

	line = NULL;
	while (1)
	{
		if (pos == 0 && reset_buffer(fd, buffer, &bytes_read) < 0)
		{
			free(line);
			return (NULL);
		}
		i = get_line_length(buffer, bytes_read, pos);
		line = copy_buffer_to_line(line, buffer, pos, i);
		update_pos(&pos, i, bytes_read, buffer);
		if (pos != 0)
			break ;
	}
	return (line);
}
/*
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error opening file\n", 19);
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		write(1, line, ft_strlen(line));
		//write(1, "\n", 1);
		free(line);
	}
	close(fd);
	return (0);
}
*/
