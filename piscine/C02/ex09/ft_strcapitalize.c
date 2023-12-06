/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:15:58 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/12 10:32:03 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);
/*
int	main(void)
{
	char	string[] = "oh mY gOd, one+tWo is threE +zero";

	ft_strcapitalize(string);
	write(1, &string,33);
	return (0);
}
*/

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	boo;

	a = 0;
	boo = 1;
	while (str[a] != '\0')
	{
		if ((str[a] >= '0' && str[a] <= '9')
			|| (str[a] >= 'a' && str[a] <= 'z')
			|| (str[a] >= 'A' && str[a] <= 'Z'))
		{
			if (boo && (str[a] >= 'a' && str[a] <= 'z'))
				str[a] = str[a] - 32;
			else if (!boo && (str[a] >= 'A' && str[a] <= 'Z'))
				str[a] = str[a] + 32;
			boo = 0;
		}
		else
			boo = 1;
		a++;
	}
	return (str);
}
