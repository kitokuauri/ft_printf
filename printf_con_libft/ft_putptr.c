/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:59:04 by aursuare          #+#    #+#             */
/*   Updated: 2024/09/17 17:17:17 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned long nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb >= 16)
		ft_putnbr_hex(nb / 16);
	ft_putchar_fd(hex[nb % 16], 1);
}

void	ft_putptr(void *ptr)
{
	unsigned long	nb;

	nb = (unsigned long)ptr;
	ft_putstr_fd("0x", 1);
	ft_putnbr_hex(nb);
}
