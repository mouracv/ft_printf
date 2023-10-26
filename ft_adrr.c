/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adrr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:55:54 by aleperei          #+#    #+#             */
/*   Updated: 2023/05/17 14:19:01 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa1(char *str, unsigned long int n)
{
	int	counter;

	counter = 0;
	if (n > 15)
	{
		counter += ft_hexa1(str, (n / 16));
		counter += ft_hexa1(str, (n % 16));
	}
	else
		counter += ft_putchar(str[n]);
	return (counter);
}

int	ft_adrr(unsigned long int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		counter += ft_putstr("(nil)");
	else
	{
		counter += ft_putstr("0x");
		counter += ft_hexa1("0123456789abcdef", n);
	}
	return (counter);
}
