/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:16:50 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/16 16:05:21 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	error(char *c);
/*
int	main(void)
{
	char	test[] = " ---+--+12.34ab567";

	int re = ft_atoi(test);
	printf("%d",re);
	return (0);
}
*/

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	digit;

	i = 0;
	sign = 1;
	digit = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = (digit * 10) + (str[i] - '0');
		i++;
	}
	return (digit * sign);
}
