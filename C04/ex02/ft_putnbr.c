/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:57:55 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/14 21:27:29 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			nb = nb * (-1);
			ft_putchar('-');
		}
		if (nb / 10 > 0)
		{
			ft_putnbr(nb / 10);
		}
		digit = nb % 10 + '0';
		ft_putchar(digit);
	}
}
