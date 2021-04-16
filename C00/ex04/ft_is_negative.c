/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 02:18:22 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/05 23:19:34 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char indicador;

	if (n >= 0)
	{
		indicador = 'P';
	}
	else if (n < 0)
	{
		indicador = 'N';
	}
	write(1, &indicador, 1);
}
