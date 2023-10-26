/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:27:51 by aleperei          #+#    #+#             */
/*   Updated: 2023/05/17 12:40:54 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa(char *str, unsigned int n)
{
	int	counter;

	counter = 0;
	if (n > 15)
	{
		counter += ft_hexa(str, (n / 16));
		counter += ft_hexa(str, (n % 16));
	}
	else
		counter += ft_putchar(str[n]);
	return (counter);
}

int	ft_hexa_check(unsigned long int n, char alpha)
{
	int		counter;
	char	*hexalow;
	char	*hexaup;

	hexalow = "0123456789abcdef";
	hexaup = "0123456789ABCDEF";
	counter = 0;
	if (alpha == 'x')
		counter += ft_hexa(hexalow, n);
	else if (alpha == 'X')
		counter = ft_hexa(hexaup, n);
	return (counter);
}
