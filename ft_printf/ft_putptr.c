/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:59:04 by aursuare          #+#    #+#             */
/*   Updated: 2024/09/28 21:01:08 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(unsigned long nb, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb >= 16)
		ft_putnbr_hex(nb / 16, count);
	ft_putchar_fd(hex[nb % 16], 1, count);
	return (*count);
}

int	ft_putptr(void *ptr, int *count)
{
	unsigned long	nb;

	nb = (unsigned long)ptr;
	if (ptr == 0)
		ft_putstr_fd("(nil)", 1, count);
	else
	{
		ft_putstr_fd("0x", 1, count);
		ft_putnbr_hex(nb, count);
	}
	return (*count);
}
