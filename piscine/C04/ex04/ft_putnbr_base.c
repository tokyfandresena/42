/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:45:23 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/20 10:22:00 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c);

void	ft_putnbr_base(int nbr, char *base);

int		base_len(char *c);

int		error(int len, char *str);
/*
int	main(void)
{
	char	a[] = "0123456789";

	ft_putnbr_base(23, a);
	return (0);
}
*/

void	ft_putchar(char *c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	char	ln;

	i = 0;
	ln = base_len(base);
	while (base[i] != '\0')
	{
		if (error(ln, base) == 1)
		{
			if (nbr < 0)
				ft_putchar("-");
			nbr *= -1;
		}
		else
		{
			ft_putchar((nbr / base_len(base) + '0'));
			ft_putchar((nbr % base_len(base) + '0'));
		}
		i++;
	}
}

int	base_len(char *c)
{
	int	i;
	char
		current_caracter;

	i = 0;
	current_caracter = 0;
	while (c[i] != '\0')
	{
		current_caracter = c[i];
		i++;
	}
	return (i);
}

int	error(int len, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < len)
		if ((str[i] == 0 || str[i] == 1)
			|| (str[i] == '+' || str[i] == '-')
			|| (str[i] == str[i + 1]))
			return (0);
	i++;
	return (1);
}
