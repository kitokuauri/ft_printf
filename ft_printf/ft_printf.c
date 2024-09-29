/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:15:44 by aursuare          #+#    #+#             */
/*   Updated: 2024/09/28 21:04:11 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_specifier(char spec, va_list args, int *count)
{
	if (spec == 'c')
		ft_putchar_fd(va_arg(args, int), 1, count);
	else if (spec == 's')
		ft_putstr_fd(va_arg(args, char *), 1, count);
	else if (spec == 'p')
		ft_putptr(va_arg(args, void *), count);
	else if (spec == 'd' || spec == 'i')
		ft_putnbr_fd(va_arg(args, int), 1, count);
	else if (spec == 'u')
		ft_put_unsigned(va_arg(args, unsigned int), count);
	else if (spec == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", count);
	else if (spec == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", count);
	else if (spec == '%')
		ft_putchar_fd('%', 1, count);
	return (*count);
}

int	ft_printf(char const *var, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, var);
	while (var[i])
	{
		if (var[i] == '%' && var[i + 1])
		{
			count = handle_specifier(var[++i], args, &count);
			i++;
		}
		else
		{
			count = ft_putchar_fd(var[i], 1, &count);
			i++;
		}
	}
	va_end(args);
	return (count);
}
