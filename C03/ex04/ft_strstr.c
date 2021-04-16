/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:19:31 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/13 13:49:02 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int g_find_counter;

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int str_counter;

	str_counter = 0;
	g_find_counter = 0;
	if (*to_find == '\0')
		return (str);
	while (str[str_counter] != '\0')
	{
		if (str[str_counter] == to_find[g_find_counter])
		{
			str_counter++;
			g_find_counter++;
		}
		else
		{
			str_counter++;
			g_find_counter = 0;
		}
		if (to_find[g_find_counter] == '\0')
		{
			str = &str[str_counter - g_find_counter];
			return (str);
		}
	}
	return (0);
}
