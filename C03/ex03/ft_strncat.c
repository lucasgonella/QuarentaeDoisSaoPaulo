/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:29:46 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/13 17:04:19 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int dest_counter;
	unsigned int src_counter;

	dest_counter = 0;
	src_counter = 0;
	while (dest[dest_counter] != '\0')
	{
		dest_counter++;
	}
	while ((src_counter < nb) && (src[src_counter] != '\0'))
	{
		dest[dest_counter] = src[src_counter];
		src_counter++;
		dest_counter++;
	}
	dest[dest_counter] = '\0';
	return (dest);
}
