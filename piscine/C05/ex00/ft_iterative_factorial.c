/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:51:21 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/20 16:41:43 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb);
/*
int	main(void)
{
	int	a;
	int	result;

	a = 5;
	result = ft_iterative_factorial(a);
	printf("%d", result);
	return (0);
}
*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 0)
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
	}
	else
		return (0);
	return (result);
}
