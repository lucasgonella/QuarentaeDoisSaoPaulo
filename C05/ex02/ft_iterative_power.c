/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:57:08 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/16 19:45:04 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int ret;

	ret = 1;
	if (power < 0)
		return (0);
	while (--power >= 0)
	{
		ret = ret * nb;
	}
	return (ret);
}
