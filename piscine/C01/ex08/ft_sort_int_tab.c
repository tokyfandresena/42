/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:38:49 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/23 08:00:16 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
/*
int	main(void)
{
	int	i;
	int	arr[4] = {24, 14, 58, 9};

	i = 0;
	ft_sort_int_tab(arr, 4);

	printf("%d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3]);
	return (0);
}
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	copy;

	while (size >= 0)
	{
		x = 0;
		while (x <= size - 1)
		{
			if (tab[x] > tab[x + 1])
			{
				copy = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = copy;
			}
			x++;
		}
		size--;
	}
}
