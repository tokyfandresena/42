/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:44:35 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/21 13:27:18 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power);
/*
int	main(void)
{
	int	a;
	int	b;
	int	res;

	a = -4;
	b = -2;
	res = ft_iterative_power(a, b);
	printf("%d", res);
	return (0);
}
*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	return (res);
}
