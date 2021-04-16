/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-fari <lde-fari@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:49:10 by lde-fari          #+#    #+#             */
/*   Updated: 2021/04/07 23:39:40 by lde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int position;
	int count;
	int aux;

	position = 0;
	count = position + 1;
	while (position < size)
	{
		while (count < size)
		{
			if (tab[position] > tab[count])
			{
				aux = tab[position];
				tab[position] = tab[count];
				tab[count] = aux;
			}
			count++;
		}
		position++;
		count = position + 1;
	}
}
