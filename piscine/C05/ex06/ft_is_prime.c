/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:02:21 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/21 11:12:58 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb);
/*
int	main(void)
{
	int	a;
	
	a = 2147483647;
	if (ft_is_prime(a) == 1)
	{
		printf("%d est un nombre premier", a);
	}
	else
	{
		printf("%d n'est pas un nombre premier", a);
	}
	return (0);
}
*/

int	ft_is_prime(int nb)
{
	int	b;

	b = 2;
	if (nb < 2)
	{
		return (0);
	}
	else if (nb == 2147483647)
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
