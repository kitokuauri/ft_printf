/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:21:06 by aursuare          #+#    #+#             */
/*   Updated: 2024/09/28 20:56:42 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd, int *count)
{
	long long	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd, count);
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd, count);
	ft_putchar_fd(nb % 10 + 48, fd, count);
	return (*count);
}
