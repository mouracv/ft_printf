/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:43:39 by aleperei          #+#    #+#             */
/*   Updated: 2023/06/27 13:27:02 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checkf(va_list arg, char alpha)
{
	int	counter;

	counter = 0;
	if (alpha == '%')
		counter += ft_putchar('%');
	else if (alpha == 'c')
		counter += ft_putchar(va_arg(arg, int));
	else if (alpha == 's')
		counter += ft_putstr(va_arg(arg, char *));
	else if (alpha == 'u')
		counter += ft_undec(va_arg(arg, unsigned int));
	else if (alpha == 'd' || alpha == 'i')
		counter += ft_putnbr(va_arg(arg, int));
	else if (alpha == 'x' || alpha == 'X')
		counter += ft_hexa_check(va_arg(arg, unsigned long int), alpha);
	else if (alpha == 'p')
		counter += ft_adrr(va_arg(arg, unsigned long int));
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			counter += ft_checkf(arg, str[i + 1]);
			i += 1;
		}
		else
			counter += write(1, &str[i], 1);
		i++;
	}
	va_end(arg);
	return (counter);
}
