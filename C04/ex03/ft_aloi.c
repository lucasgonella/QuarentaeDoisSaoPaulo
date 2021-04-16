/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aloi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:58:48 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/15 14:22:07 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;                                     //Pequeno gafanhoto, isso vale mesmo a pena?
	int is_negative;
	int counter;

	result = 0;
	is_negative = 1;
	counter = 0;
	counter = count_spaces(str, counter);
	counter = count_negatives(str, counter);
	if (counter < 0)
	{
		counter = counter * -1;
		is_negative = -1;
	}
	while ((str[counter] != '\0') &&
	(str[counter] >= 48) && (str[counter] <= 57))
	{
		result = (result * 10) + (str[counter] - '0');
		counter++;
	}
	return (is_negative * result);
}

int		count_spaces(char *str, int counter)
{
	while ((str[counter] == '\t') || (str[counter] == '\v') ||
	(str[counter] == '\f') || (str[counter] == '\r') ||
	(str[counter] == '\n') || (str[counter] == ' '))
	{
		counter++;
	}
	return (counter);
}

int		count_negatives(char *str, int counter)
{
	int negcounter;

	negcounter = 1;
	while ((str[counter] == '+') || (str[counter] == '-'))
	{
		if (str[counter] == '-')
		{
			negcounter = negcounter * -1;
		}
		counter++;
	}
	return (counter * negcounter);
}
