/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:32:01 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/09 00:20:21 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int counter;
	int typestr;

	typestr = 1;
	counter = *str;
	while (counter != '\0')
	{
		if (*str <= 47)
		{
			typestr = 0;
		}
		else if (*str >= 58)
		{
			typestr = 0;
		}
		str++;
		counter = *str;
	}
	return (typestr);
}
