/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:30:52 by mfontain          #+#    #+#             */
/*   Updated: 2025/12/23 15:45:33 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//1* lire le fd
//2* copier le buffer liberer le buffer
//3* concatener les morceaux de buffer
//4* tester si \n 
//5* si \n envoyer tout ce qui precede le \n et le \n
//6* effacer cette partie et conserver le reste
