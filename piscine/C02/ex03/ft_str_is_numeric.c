/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:58:42 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/13 07:18:27 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str);
/*
int	main(void)
{
	char	nbrs[] = "123b45";
	char	a;
	
	a = 0;
	a = ft_str_is_numeric(nbrs) + '0';
	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, &nbrs, 5);
	return (0);
}
*/

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= '0') && (str[a] <= '9'))
		{
		}
		else
			return (0);
		a++;
	}
	return (1);
}
