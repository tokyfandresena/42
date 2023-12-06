/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:35:04 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/13 07:21:31 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str);
/*
int	main(void)
{
	char	string[] = "UPERaCASE";
	int		result;

	result = 0;
	result = ft_str_is_uppercase(string) + '0';
	write(1, &result, 1);
	return (0);
}
*/

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
		{
		}
		else
			return (0);
		a++;
	}
	return (1);
}
