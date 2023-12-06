/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 07:25:51 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/13 07:46:18 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);
/*
int	main(void)
{
	char	string[] = "Hel5lo";
	char	a;

	a = ft_str_is_alpha(string) + '0';
	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, &string, 6);
	return (0);
}
*/

int	ft_str_is_alpha(char *str)
{
	int	b;

	b = 0;
	while (str[b] != '\0')
	{
		if ((str[b] >= 'A' && str[b] <= 'Z'))
		{
		}
		else if ((str[b] >= 'a' && str[b] <= 'z'))
		{
		}
		else
			return (0);
		b++;
	}
	return (1);
}
