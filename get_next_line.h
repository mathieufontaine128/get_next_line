/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:57:42 by mfontain          #+#    #+#             */
/*   Updated: 2025/12/04 18:11:09 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H


#include <unistd.h>

void	*ft_calloc(size_t nmemb, size_t size);
char *get_next_line(int fd);

#endif
