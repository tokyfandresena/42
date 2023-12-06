/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:43:40 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/12 12:21:28 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
/*
int	main(void)
{
	int	nbr;

	nbr = -4568213;
	ft_putnbr(nbr);
	return (0);
}
*/

void	ft_putnbr(int nb)
{
	char	a;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	a = (nb % 10) + '0';
	nb = nb / 10;
	if (nb > 0)
	{
		ft_putnbr(nb);
		write(1, &a, 1);
	}
}
