/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:18:51 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/13 13:30:47 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] && s2[count] && count < n)
	{
		count++;
	}
	if (n == 0)
	{
		return (0);
	}
	if (count == n)
	{
		count--;
	}
	return (s1[count] - s2[count]);
}
