/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalalat <tmalalat@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 07:48:26 by tmalalat          #+#    #+#             */
/*   Updated: 2023/11/23 07:48:34 by tmalalat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);
/*
int	main(void)
{
	int	nbr;
	char	
		string[] = "hello";

	nbr = ft_strlen(string);
	printf("long is %d", nbr);
	return (0);
}
*/

int	ft_strlen(char *str)
{
	int	i;
	char	
		current_caracter;

	i = 0;
	current_caracter = 0;
	while (str[i] != '\0')
	{
		current_caracter = str[i];
		i++;
	}
	return (i);
}
