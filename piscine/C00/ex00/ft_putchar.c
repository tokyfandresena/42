/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 06:22:58 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/03 13:59:37 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
/*
int	main(void)
{
	char	a;
	
	a = 'b';
	ft_putchar(a);
	return (0);
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
