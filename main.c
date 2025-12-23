/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:07:37 by mfontain          #+#    #+#             */
/*   Updated: 2025/12/23 16:42:53 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	int	rd;
	char	buf[BUFFER_SIZE];

	fd = open("text2.txt", O_RDONLY);
	if (fd == -1)
		printf("mauvais filde\n");
		return (0);
	rd = 1;
	while (rd > 0)
	{
		//printf("%s",get_next_line(fd));
		rd = read(fd, buf, BUFFER_SIZE);
		printf("ohoh%s", buf);
	}
	printf("ohoh");
	close(fd);
	return (1);
}
