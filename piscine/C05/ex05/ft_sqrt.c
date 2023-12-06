/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:04:48 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/21 10:21:33 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	a;

	a = 2129511337;
	printf("%d", ft_sqrt(a));
	return (0);
}


int	ft_sqrt(int nb)
{
	int	a;
	int	res;

	a = nb;
	if (a < 0)
		return (0);
	else if (a == 1)
		return (1);
	else if (a == 2147483647)
		return (0);
	res = 0;
	while (res <= nb / 2)
	{
		if (res * res == a)
		{
			res = (res + nb / 2);
			return (res);
		}
		res++;
	}
	if (res > 46340)
		return (0);
	return (0);
}
