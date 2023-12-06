/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:20:25 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/20 10:37:49 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb);
/*
int	main(void)
{
	int	a;
	int	result;
	a = 5;
	result = ft_recursive_factorial(a);
	printf("%d", result);
	return (0);
}
*/

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 0)
	{
		result = (nb * ft_recursive_factorial(nb - 1));
	}
	else
	{
		return (0);
	}
	return (result);
}
