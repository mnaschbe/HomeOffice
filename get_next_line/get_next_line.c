/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:45:02 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/10/24 19:41:07 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_first_llen(int fd)
{
	int x;
	char buff[BUFFER_SIZE];
	char *buffer;

	x = 0;
	while (buff[x] != '\n')
		x++;
	read(fd, buff, BUFFER_SIZE);
	buffer = malloc(x * sizeof (char) + 1);
	if (!buffer || BUFFER_SIZE <= 0)
		return (NULL);
	x = 0;
	while (buff[x] != '\n')
	{
		buffer[x] = buff[x];
		x++;
	}
	return (buffer);
}

char *get_nxt_line(int fd)
{
	char buff[BUFFER_SIZE + 1];
	static char *buffer;
	int x;
	char *tmp;
	int a;

	read(fd, buff, BUFFER_SIZE);
	buffer = get_first_llen(fd);
	x = ft_strlen(buffer);
	if (buff[x] != BUFFER_SIZE)
	{
		x = ft_strlen(buffer) + 1;
		x += a;
		get_nxt_line(fd, x, buff, buffer);
	}
	return (buffer);
}

char *get_next_line(int fd, int x, char *buff, char *buffer)
{
	static char *saved;
	int			a;
	int			*xp;

	a = 0;
	xp = &x;
	while (buff <= '\n' && )
		xp++;
	saved = (char *)malloc(sizeof(char) * xp + x - 1);
	if (!buffer || !buff)
		return (NULL);
	a = 0;
	while (buff[x++] <= '\n')
		saved[a] = buff[x];
	buffer = ft_strjoin(buffer);
	return (buffer);
}

int	main()
{
	int fd;
	char path[] = "/nfs/homes/mnaschbe/ProTee/get_next_line/tst.txt";

	fd = open(path, O_RDONLY);
	get_next_line(fd);
	return 0;
}

// static t_list	*list = NULL;
// char			*nextline;
// if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &nextline, 0) < 0)
// 	return(NULL);
// create_list(&list, fd);
// if (list == NULL)
// 	return(NULL);
// nextline = get_line(list);
// polish_list(&list);
// // return (0);
// 		a = 0;
// 		buffer += a;
// 		while (buff[a] != '\n')
// 		{
// 			buffer[a] = buff[a];
// 			a++;
// 			x++;
// 		}
/*S_IRWXU	700	The owner (user) has read, write and execute rights
S_IRUSR	400	The owner has read rights
S_IWUSR	200	The owner has write rights
S_IXUSR	100	The owner has execute rights
S_IRWXG	070	The group has read, write and execute rights
S_IRGRP	040	The group has read rights
S_IWGRP	020	The group has write rights
S_IXGRP	010	The group has execute rights
S_IRWXO	007	Other users have read, write and execute rights
S_IROTH	004	Others have read rights
S_IWOTH	002	Others have write rights
S_IXOTH	001	Others have execute rights
O_RDONLY	Read only
O_WRONLY	Write only
O_RDWR	Read and write
O_TRUNC	Truncated mode.
If the file exists and the access mode allows writing to it (O_WRONLY ou O_RDWR),
	truncates its contents to 0 size when it is opened,
	with the effect of overwriting the file.
O_APPEND	Append mode.
The file offset is set to the end of the file at each write,
	with the effect of adding text to the end of the file instead of overwriting it.
O_CREAT	Creates the file if it does not already exist.
Its permissions must then be specified in open‘s mode parameter.*/
