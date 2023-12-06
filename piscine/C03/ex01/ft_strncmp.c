/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:15:48 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/13 09:50:43 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);
/*
int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "hed";
	int	a;
	a = ft_strncmp(str1, str2, 3);
	printf("%d", a);
	return (0);
}
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	b;
	int				a;

	a = 0;
	b = 1;
	if (n == 0)
		return (0);
	while (s1[a] == s2[a] && b < n && s1[a] != '\0')
	{
		a++;
		b++;
	}
	return ((int)s1[a] - s2[a]);
}
