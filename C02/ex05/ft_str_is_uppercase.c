/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:04:40 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/09 00:04:56 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int counter;
	int typestr;

	typestr = 1;
	counter = *str;
	while (counter != '\0')
	{
		if (*str < 65)
		{
			typestr = 0;
		}
		else if (*str > 90)
		{
			typestr = 0;
		}
		str++;
		counter = *str;
	}
	return (typestr);
}
