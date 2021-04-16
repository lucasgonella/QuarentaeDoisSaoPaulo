/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:07:27 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/07 23:39:36 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int aux;

	start = 0;
	while (start != size / 2)
	{
		aux = tab[start];
		tab[start] = tab[(size - 1) - start];
		tab[(size - 1) - start] = aux;
		start++;
	}
}
