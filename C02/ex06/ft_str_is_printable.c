/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:19:57 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/09 14:02:16 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int counter;
	int typestr;

	typestr = 1;
	counter = *str;
	while (counter != '\0')
	{
		if (*str < 32)
		{
			typestr = 0;
		}
		else if (*str > 127)
		{
			typestr = 0;
		}
		str++;
		counter = *str;
	}
	return (typestr);
}
