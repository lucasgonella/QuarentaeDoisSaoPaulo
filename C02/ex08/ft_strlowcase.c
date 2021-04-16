/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:21:59 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/09 00:22:03 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 65) && (str[counter] <= 90))
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	return (str);
}
