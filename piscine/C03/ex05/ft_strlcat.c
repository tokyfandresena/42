/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:20:30 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/23 08:49:32 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				ft_strlen(char *str);
/*
int	main(void)
{
	char	dest[] = "Bonjour ";
	char	src[] = "Toky, bienvenue a 42";
	int	result;
	result = ft_strlcat(dest, src, 5);

	printf("%s", dest);
	printf("\n%d", result);

	return (0);
}
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	dl;
	unsigned int	sl;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	dl = b;
	sl = ft_strlen(src);
	if (size == 0 || size <= dl)
		return (sl + size);
	while ((a < size - dl - 1) && (src[a] != '\0'))
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dl + sl);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
