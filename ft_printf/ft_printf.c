/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psadsara <psadsara@student.42bangkok.com>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-31 14:57:27 by psadsara          #+#    #+#             */
/*   Updated: 2024-03-31 14:57:27 by psadsara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_printf_format(const char *format, va_list args)
{
    int count = 0;

    while (*format)
    {
        if (*format == '%' && *(format + 1))
        {
            format++;
            if (*format == 'c')
                count += ft_print_char(va_arg(args, int));
            else if (*format == 's')
                count += ft_print_str(va_arg(args, char *));
            else if (*format == 'p')
            {
                count += ft_print_str("0x");
                count += ft_print_hex((unsigned long)va_arg(args, void *), 0);
            }
            else if (*format == 'd' || *format == 'i')
                count += ft_print_nbr(va_arg(args, int));
            else if (*format == 'u')
                count += ft_print_unsigned(va_arg(args, unsigned int));
            else if (*format == 'x' || *format == 'X')
                count += ft_print_hex(va_arg(args, unsigned int), *format == 'X');
            else if (*format == '%')
                count += ft_print_char('%');
            else
                count += ft_print_char(*format);
        }
        else
            count += ft_print_char(*format);
        format++;
    }
    return count;
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int count;

    va_start(args, format);
    count = ft_printf_format(format, args);
    va_end(args);
    return count;
}

// int main()
// {
	
// 	printf("Testing    printf: %c %s %p %d %i %u %x %X %%\n", 'A', "Hello, world!", (void *)0x12345678, -123, 456, 789, 255, 255, 42);
// 	ft_printf("Testing ft_printf: %c %s %p %d %i %u %x %X %%\n", 'A', "Hello, world!", (void *)0x12345678, -123, 456, 789, 255, 255, 42);
// 	ft_printf("%c%c%c\n", 'a', '\t', 'b');
// 	printf("%c%c%c\n", 'a', '\t', 'b');
// ft_printf("\n");
// printf("\n");
// ft_printf("\001\002\007\v\010\f\r\n");
// printf("\001\002\007\v\010\f\r\n");
// ft_printf(" %%\n");
// printf(" %%\n");
// ft_printf("%%c\n");
// printf("%%c\n");
// ft_printf("%%%%%%\n");
// printf("%%%%%%\n");
// ft_printf("%%%c\n", 'x');
// printf("%%%c\n", 'x');
// ft_printf(" %c\n", 'x');
// printf(" %c\n", 'x');
// ft_printf("%c \n", 'x');
// printf("%c \n", 'x');
// ft_printf("%c%c%c\n", 'a', '\t', 'b');
// printf("%c%c%c\n", 'a', '\t', 'b');
// ft_printf("%cc%cc%c\n", 'a', '\t', 'b');
// ft_printf("%cc%cc%c\n", 'a', '\t', 'b');
// ft_printf("%cs%cs%c\n", 'c', 'b', 'a');
// printf("%cs%cs%c\n", 'c', 'b', 'a');
// ft_printf("%s\n", "");
// printf("%s\n", "");
// ft_printf("%s\n", (char *)NULL);
// ft_printf("%s\n", (char *)NULL);
// ft_printf("%s\n", "some string with %s hehe");
// printf("%s\n", "some string with %s hehe");
// ft_printf(" %s\n", "can it handle \t and \n?");
// printf(" %s\n", "can it handle \t and \n?");
// ft_printf("%sx\n", "{} al$#@@@^&$$^#^@@^$*((&");
// printf("%sx\n", "{} al$#@@@^&$$^#^@@^$*((&");

// int	x, y;
// 	x = 0;
// 	y = 0;
// 	char* success = "Success\n";

// 	printf("\n----------- TEST: %%X -----------\n\n");
// 	printf("Testing: (\"\\t%%X\\n\", 42)\n");
// 	x += printf("  Or\t:\t%X\n", 42);
// 	y += ft_printf("  Ft\t:\t%X\n", 42);
// 	  if (x == y)
//         printf("%s", success);

// 	printf("Printf = %d, ft_printf = %d\n\n", x, y);
// 	x = 0;
// 	y = 0;
// 	printf("Testing: (\"\\tThe hex number %%X is visible.\\n\", 5671)\n");
// 	x += printf("  Or\t:\tThe hex number %X is visible.\n", 5671);
// 	y += ft_printf("  Ft\t:\tThe hex number %X is visible.\n", 5671);
// 		  if (x == y)
//         printf("%s", success);

// 	printf("Printf = %d, ft_printf = %d\n\n", x, y);
// 	x = 0;
// 	y = 0;
// 	printf("Testing: (\"\\t%%X\\n\", INT_MAX)\n");
// 	x += printf("  Or\t:\t%X\n", INT_MAX);
// 	y += ft_printf("  Ft\t:\t%X\n", INT_MAX);
// 		  if (x == y)
//         printf("%s", success);

// 	printf("Printf = %d, ft_printf = %d\n\n", x, y);
// 	x = 0;
// 	y = 0;
// 	printf("Testing: (\"\\t%%X\\n\", INT_MIN)\n");
// 	x += printf("  Or\t:\t%X\n", INT_MIN);
// 	y += ft_printf("  Ft\t:\t%X\n", INT_MIN);
// 	printf("Printf = %d, ft_printf = %d\n\n", x, y);
// 		  if (x == y)
//         printf("%s", success);

// 	x = 0;
// 	y = 0;
// 	printf("Testing: (\"\\t%%X\\n\", -42)\n");
// 	x += printf("  Or\t:\t%X\n", -42);
// 	y += ft_printf("  Ft\t:\t%X\n", -42);
// 	printf("Printf = %d, ft_printf = %d\n\n", x, y);
// 		  if (x == y)
//         printf("%s", success);

// 	x = 0;
// 	y = 0;
// 	printf("Testing: (\"\\t%%X\\n\", UINT_MAX)\n");
// 	x += printf("  Or\t:\t%X\n", UINT_MAX);
// 	y += ft_printf("  Ft\t:\t%X\n", UINT_MAX);
// 	printf("Printf = %d, ft_printf = %d\n\n", x, y);
// 		  if (x == y)
//         printf("%s", success);

	
// }