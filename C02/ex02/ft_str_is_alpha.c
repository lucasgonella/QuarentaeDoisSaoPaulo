/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:20:31 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/09 00:20:34 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int counter;
	int typestr;

	typestr = 1;
	counter = *str;
	while (counter != '\0')
	{
		if (*str <= 64)
		{
			typestr = 0;
		}
		else if ((*str > 90) && (*str <= 96))
		{
			typestr = 0;
		}
		else if (*str >= 123)
		{
			typestr = 0;
		}
		str++;
		counter = *str;
	}
	return (typestr);
}
