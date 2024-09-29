/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:15:44 by aursuare          #+#    #+#             */
/*   Updated: 2024/09/17 17:30:01 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_specifier(char spec, va_list args)
{
	if (spec == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (spec == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (spec == 'p')
		ft_putptr(va_arg(args, void *));
	else if (spec == 'd' || spec == 'i')
		ft_putnbr_base(va_arg(args, int), "0123456789");
	else if (spec == 'u')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
	else if (spec == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (spec == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (spec == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(char const *var, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, var);
	while (var[i])
	{
		if (var[i] == '%' && var[i + 1])
			handle_specifier(var[++i], args);
		else
		{
			ft_putchar_fd(var[i], 1);
			i++;
		}
	}
	va_end(args);
	return (i);
}
