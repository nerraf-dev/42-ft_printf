#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int	main(void)
{
	int i;
	printf("NULL: %p\n", NULL);
	ft_printf("PNULL: %p\n", NULL);
	ft_printf("NULL: %x\n", NULL);
	ft_printf(" %p \n", 1);
ft_printf(" %p \n", 15);
ft_printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
ft_printf(" %p %p \n", 0, 0);

	// Basic Tests
	ft_printf("%x\n", 0);
	ft_printf("%x\n", 255);
	ft_printf("%x\n", INT_MIN);
	ft_printf("%x\n", INT_MAX);

	// Edge Cases
	ft_printf("%x\n", LONG_MIN);
	ft_printf("%x\n", LONG_MAX);
	ft_printf("%x\n", ULONG_MAX);
	ft_printf("%x\n", -1);

	// Mixed Tests
	ft_printf("Hex: %x, Dec: %d, Char: %c, String: %s\n", 255, 255, 'A', "Hello");

	// Additional Tests
	ft_printf("Unsigned: %u\n", 4294967295U);
	i = 12345678;
	ft_printf("Pointer: %p\n", &i);
	printf("Pointer: %p\n", &i);
	ft_printf("String: %s\n", "Test string");
	ft_printf("Character: %c\n", 'A');
	ft_printf("Percentage: %%\n");

	//printf
	// printf("\n\n**printf**\n\n");
	// // Basic Tests
	// printf("%x\n", 0);
	// printf("%x\n", 255);
	// printf("%x\n", INT_MIN);
	// printf("%x\n", INT_MAX);

	// // Edge Cases
	// printf("%lx\n", LONG_MIN);
	// printf("%lx\n", LONG_MAX);
	// printf("%lx\n", ULONG_MAX);
	// printf("%x\n", -1);

	// // Mixed Tests
	// printf("Hex: %x, Dec: %d, Char: %c, String: %s\n", 255, 255, 'A', "Hello");

	// // Additional Tests
	// printf("Unsigned: %u\n", 4294967295U);
	// printf("Pointer: %p\n", (void*)0x12345678);
	// printf("String: %s\n", "Test string");
	// printf("Character: %c\n", 'A');
	// printf("Percentage: %%\n");


	return (0);
}
