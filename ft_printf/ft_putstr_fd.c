/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:52:59 by aursuare          #+#    #+#             */
/*   Updated: 2024/09/28 21:12:08 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd, int *count)
{
	int	i;

	i = 0;
	if (s == 0)
	{
		ft_putstr_fd("(null)", fd, count);
	}
	else
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd, count);
			i++;
		}
	}
	return (*count);
}
