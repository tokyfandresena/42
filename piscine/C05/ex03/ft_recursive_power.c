/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:30:47 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/20 16:42:29 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power);
/*
int	main(void)
{
	int	a;
	int	b;
	int	res;

	a = 5;
	b = 3;
	res = ft_recursive_power(a, b);
	printf("%d", res);
	return (0);
}
*/

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	res = (nb * ft_recursive_power(nb, (power - 1)));
	return (res);
}
