/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:55:22 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/21 08:20:56 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_swap(char *a[], char *b[]);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = 1;
	while (a < argc - 1)
	{
		b = 1;
		while (b < argc - 1)
		{
			if (ft_strcmp(argv[b], argv[b + 1]) > 0)
			{
				ft_swap(&argv[b], &argv[b + 1]);
			}
			b++;
		}
		a++;
	}
	b = 1;
	while (b < argc)
	{
		ft_putstr(argv[b]);
		ft_putchar('\n');
		b++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}
	return ((int)s1[a] - s2[a]);
}

void	ft_swap(char *a[], char *b[])
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
