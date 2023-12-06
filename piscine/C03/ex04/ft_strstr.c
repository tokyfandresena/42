/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:09:41 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/16 14:05:05 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);
/*
int	main(void)
{
	char	str[] = "Hello my name is alfred";
	char	srch[] = "name";
	char	*result;
	result = ft_strstr(str, srch);
	printf("%s", result);
	
	//if (result != NULL)//0
	//{//
	//	write(1, "trouver\n", 7);//
	//	write(1, "\n", 1);//
	//	write(1, &srch, 4);//
	//}
	return (0);
}
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	if (to_find[0] == '\0')
		return (str);
	a = 0;
	while (str[a])
	{
		b = 0;
		while (str[a + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
				return (&str[a]);
			b++;
		}
		a++;
	}
	return (0);
}
