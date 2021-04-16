/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:50:16 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/15 15:54:11 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;
	int ret;

	n = 1;
	ret = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	while (n <= nb)
	{
		ret = ret * n;
		n++;
	}
	return (ret);
}
