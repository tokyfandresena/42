/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:13:47 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/07 12:23:25 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
/*
int	main(void)
{
	int	x;
	int	y;
	int	rsdiv;
	int	rsmod;

	x = 6;
	y = 2;
	ft_div_mod(x, y, &rsdiv, &rsmod);
	printf("div= %d et mod= %d", rsdiv, rsmod);
	return (0);
}
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
