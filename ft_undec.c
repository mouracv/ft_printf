/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_undec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleperei <aleperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:39:43 by aleperei          #+#    #+#             */
/*   Updated: 2023/05/12 13:49:24 by aleperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_undec(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n > 9)
	{
		counter += ft_putnbr((n / 10));
		counter += ft_putnbr((n % 10));
	}
	else
		counter += ft_putchar((n + '0'));
	return (counter);
}
