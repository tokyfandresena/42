/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:03:11 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/07 13:23:28 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);
/*
int	main(void)
{
	int	x;
	int	y;

	x = 6;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("x = %d et y = %d.\n", x, y);
	return (0);
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
