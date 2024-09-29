/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:26:59 by aursuare          #+#    #+#             */
/*   Updated: 2024/09/28 20:57:03 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int n, int *count)
{
	if (n == 0)
		ft_putchar_fd('0', 1, count);
	else
	{
		if (n / 10 != 0)
			ft_put_unsigned(n / 10, count);
		ft_putchar_fd((n % 10) + '0', 1, count);
		while (n > 0)
			n /= 10;
	}
	return (*count);
}
