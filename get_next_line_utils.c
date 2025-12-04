/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:12:17 by mfontain          #+#    #+#             */
/*   Updated: 2025/12/04 18:47:14 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tab;

	tab = (unsigned char*)s;
	while (n > 0)
	{
		*tab++ = '\0';
		n--;

	}
}
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	size_total;

	size_total = nmemb * size;
	tab = malloc(size_total);
	if (!tab)
		return (NULL);
	ft_bzero(tab, size_total);	
	return (tab);
}
