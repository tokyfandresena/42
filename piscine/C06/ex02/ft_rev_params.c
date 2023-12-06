/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42.antanan      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:48:59 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/21 08:22:57 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = argc - 1;
	while (a > 0)
	{
		b = 0;
		while (argc && argv[a][b] != '\0')
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		a--;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
