/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:19:44 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/09 00:19:47 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 97) && (str[counter] <= 122))
		{
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	return (str);
}
