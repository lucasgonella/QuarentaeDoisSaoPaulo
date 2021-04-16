/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:28:06 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/13 13:32:13 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int src_counter;
	int dest_counter;

	src_counter = 0;
	dest_counter = 0;
	while (dest[dest_counter])
	{
		dest_counter++;
	}
	while (src[src_counter])
	{
		dest[dest_counter + src_counter] = src[src_counter];
		src_counter++;
	}
	dest[dest_counter + src_counter] = '\0';
	return (dest);
}
