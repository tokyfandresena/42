/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:38:38 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/13 07:22:11 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str);
/*
int	main(void)
{
	char	string[] = "hallo";
	int	result;
	
	result = 0;
	result = ft_str_is_printable(string) + '0';
	write(1, &result, 1);
	return (0);
}
*/

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= ' ') && (str[a] <= '~'))
		{
		}
		else
			return (0);
		a++;
	}
	return (1);
}
