/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:28:45 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/13 07:21:50 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);
/*
int	main(void)
{
	char	string[] = "abAcd";
	int	result;
	
	result = 0;
	result = ft_str_is_lowercase(string) + '0';
	write(1, &result, 1);
	return (0);
}
*/

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a') && (str[a] <= 'z'))
		{
		}
		else
			return (0);
		a++;
	}
	return (1);
}
