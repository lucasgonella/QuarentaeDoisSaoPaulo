/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:23:27 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/09 13:59:59 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z' &&
		!(str[counter - 1] >= '0' && str[counter - 1] <= '9') &&
		!(str[counter - 1] >= 'A' && str[counter - 1] <= 'Z'))
		{
			str[counter] -= 32;
		}
		if (str[counter] >= 'A' && str[counter] <= 'Z' &&
		((str[counter - 1] >= '0' && str[counter - 1] <= '9') ||
		(str[counter - 1] >= 'a' && str[counter - 1] <= 'z') ||
		(str[counter - 1] >= 'A' && str[counter - 1] <= 'Z')))
		{
			str[counter] += 32;
		}
		counter++;
	}
	return (str);
}
