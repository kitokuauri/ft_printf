/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:22:26 by aursuare          #+#    #+#             */
/*   Updated: 2024/09/17 17:17:39 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_base(unsigned int n, char *base, int size)
{
	if (n >= (unsigned int)size)
		print_base(n / size, base, size);
	ft_putchar_fd(base[n % size], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned long	n;
	unsigned int	size;

	n = 0;
	size = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		n = -nbr;
	}
	else
		n = nbr;
	print_base(n, base, size);
}
