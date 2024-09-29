/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:22:26 by aursuare          #+#    #+#             */
/*   Updated: 2024/09/28 21:00:25 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base, int *count)
{
	if (nbr >= 16)
		ft_putnbr_base(nbr / 16, base, count);
	ft_putchar_fd(base[nbr % 16], 1, count);
	return (*count);
}
