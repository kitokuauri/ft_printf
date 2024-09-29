/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:23:11 by aursuare          #+#    #+#             */
/*   Updated: 2024/09/28 19:26:11 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

void	test(void)
{
    char        c = 'A';
    char        *s = "Hola, 42!";
    void        *p = &c;
    int         d = -123;
    int         i = 42;
    unsigned int u = 4294967295;
	unsigned int o = 42;
    unsigned int x = -42;
	unsigned int X = -42;

    // Comparando %c
	printf("Imprime un solo caracter:\n");
    printf("Original printf: %%c: %c\n", c);
    ft_printf("ft_printf: %%c: %c\n", c);
	printf("\n");

    // Comparando %s
	printf("Imprime un string:\n");
    printf("Original printf: %%s: %s\n", s);
    ft_printf("ft_printf: %%s: %s\n", s);
	printf("\n");

    // Comparando %p
	printf("Imprime un puntero:\n");
    printf("Original printf: %%p: %p\n", p);
    ft_printf("ft_printf: %%p: %p\n", p);
	printf("\n");

    // Comparando %d
	printf("Imprime un numero decimal:\n");
    printf("Original printf: %%d: %d\n", d);
    ft_printf("ft_printf: %%d: %d\n", d);
	printf("\n");

    // Comparando %i
	printf("Imprime un un entero base 10:\n");
    printf("Original printf: %%i: %i\n", i);
    ft_printf("ft_printf: %%i: %i\n", i);
	printf("\n");

    // Comparando %u
	printf("Imprime un decimal sin signo:\n");
    printf("Original printf: %%u: %u\n", u);
	printf("printf: %u\n", o);
    ft_printf("ft_printf: %%u: %u\n", u);
	ft_printf("ft_printf: %u\n", o);
	printf("\n");

    // Comparando %x
	printf("Imprime un numero hexadecimal:\n");
    printf("Original printf: %%x: %x\n", x);
    ft_printf("ft_printf: %%x: %x\n", x);
	printf("\n");

    // Comparando %X
	printf("Imprime un numero HEXADECIMAL:\n");
    printf("Original printf: %%X: %X\n", X);
    ft_printf("ft_printf: %%X: %X\n", X);
	printf("\n");

    // Comparando %%
	printf("Imprime un porcentaje:\n");
    printf("Original printf: %%: %%\n");
    ft_printf("ft_printf: %%: %%\n");
	printf("\n");
}

int	main(void)
{
	test();
	return (0);
}

