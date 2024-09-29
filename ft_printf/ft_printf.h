/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:34:13 by aursuare          #+#    #+#             */
/*   Updated: 2024/09/28 20:53:25 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char const *var, ...);
int		ft_putnbr_base(unsigned int nbr, char *base, int *count);
int		ft_putptr(void *ptr, int *count);
int		ft_put_unsigned(unsigned int n, int *count);

size_t	ft_strlen(const char *str);
int		ft_putchar_fd(char c, int fd, int *count);
int		ft_putstr_fd(char *s, int fd, int *count);
int		ft_putnbr_fd(int n, int fd, int *count);

#endif
