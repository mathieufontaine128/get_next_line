/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:54:00 by mfontain          #+#    #+#             */
/*   Updated: 2025/12/04 19:27:41 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include  <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	int bytes_read;
	char *cup_buffer;
	static int	count = 1;

	printf("ft_calloc[%d]---", count++);
	cup_buffer = ft_calloc(3 + 1, sizeof(char));
	if (cup_buffer == NULL)
		return (NULL);
	bytes_read = read(fd, cup_buffer, 3);
	if (bytes_read <= 0)
	{
		free (cup_buffer);
		return (NULL); // return (free(cup_buffer), NULL)
	}
	return (cup_buffer);
}
