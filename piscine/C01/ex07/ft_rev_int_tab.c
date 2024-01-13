/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:44:56 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/07 15:37:40 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
/*
int	main(void)
{
	int	arr[6] = {1, 2, 3, 4, 5, 6};
	int	i;

	i = 0;
	ft_rev_int_tab(arr, 6);
	while (i < 6)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	arr2;

	x = 0;
	y = size - 1;
	while (x <= y)
	{
		arr2 = tab[x];
		tab[x] = tab[y];
		tab[y] = arr2;
		x++;
		y--;
	}
}
