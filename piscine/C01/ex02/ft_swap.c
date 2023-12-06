/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:32:20 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/07 12:05:14 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);
/*
int	main(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1; 

	ft_swap(&x, &y); // *a = 0, *b = 1
	printf("%d et %d", x, y);

	return (0);
}
*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
