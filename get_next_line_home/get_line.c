/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvanderh <lvanderh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:52:08 by lvanderh          #+#    #+#             */
/*   Updated: 2024/12/11 16:12:29 by lvanderh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int fd;
	char *buff;
	ssize_t reader;

	buff = malloc(2000);
	if (!buff)
		return (1);
	fd = open("stair.txt", O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (1);
	}
	while ((reader = read(fd, buff, 2000 - 1)) > 0)
	{
		buff[reader] = '\0';
		printf("contenu de buff :\t`%s`\n", buff);
	}
	if (reader == -1)
	{
		close(fd);
		free(buff);
		return (1);
	}
	close (fd);
	free(buff);
	return (0);
}