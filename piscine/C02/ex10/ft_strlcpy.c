/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:14:37 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/23 08:20:28 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
/*
int	main(void)
{
	char	string[] = "hello";
	char	copied[] = "wolrd";

	ft_strlcpy(copied, string, 2);
	printf("original: %s, copied: %s", string, copied);
	return (0);
}
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	srcl;

	a = 0;
	srcl = 0;
	while (src[srcl] != '\0')
		srcl++;
	if (size != 0)
	{
		while (src[a] != '\0' && a < size - 1)
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (srcl);
}
