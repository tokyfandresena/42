/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:28:35 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/23 12:58:30 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_find_next_prime(int nb);

int	ft_is_prime(int nb);
/*
int	main(void)
{
	int	a;
	int	res;

	a = 465;
	res = ft_find_next_prime(a);
	printf("%d", res);
	return (0);
}
*/

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	b;

	b = 2;
	if (nb == 2147483647)
		return (1);
	while (b * b <= nb)
	{
		if (nb % b == 0)
		{
			return (0);
		}
		b++;
	}
	return (1);
}
