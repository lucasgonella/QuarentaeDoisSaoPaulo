/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:03:14 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/09 00:04:58 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int counter;
	int typestr;

	typestr = 1;
	counter = *str;
	while (counter != '\0')
	{
		if (*str < 97)
		{
			typestr = 0;
		}
		else if (*str > 122)
		{
			typestr = 0;
		}
		str++;
		counter = *str;
	}
	return (typestr);
}
