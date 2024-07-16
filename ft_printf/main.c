#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

// // Helper function to capture the output of ft_printf and printf
// void compare_printf(const char *format, ...) {
//     va_list args1, args2;
//     va_start(args1, format);
//     va_copy(args2, args1);

//     // Buffers to store the outputs
//     char buffer1[1024];
//     char buffer2[1024];

//     // Capture ft_printf output
//     FILE *ft_printf_output = fmemopen(buffer1, sizeof(buffer1), "w");
//     if (ft_printf_output == NULL) {
//         perror("fmemopen");
//         exit(EXIT_FAILURE);
//     }
//     int ft_printf_result = ft_printf(format, args1); // This should be ft_printf
//     fclose(ft_printf_output);

//     // Capture printf output
//     FILE *printf_output = fmemopen(buffer2, sizeof(buffer2), "w");
//     if (printf_output == NULL) {
//         perror("fmemopen");
//         exit(EXIT_FAILURE);
//     }
//     int printf_result = vfprintf(printf_output, format, args2);
//     fclose(printf_output);

//     // Print the results side by side
//     printf("ft_printf: %s (return: %d)\n", buffer1, ft_printf_result);
//     printf("printf:    %s (return: %d)\n", buffer2, printf_result);

//     va_end(args1);
//     va_end(args2);
// }

// int main(void) {
//     // Basic Tests
//     compare_printf("%x\n", 0);
//     compare_printf("%x\n", 255);
//     compare_printf("%x\n", INT_MIN);
//     compare_printf("%x\n", INT_MAX);

//     // Edge Cases
//     compare_printf("%lx\n", LONG_MIN);
//     compare_printf("%lx\n", LONG_MAX);
//     compare_printf("%lx\n", ULONG_MAX);
//     compare_printf("%x\n", -1);

//     // Mixed Tests
//     compare_printf("Hex: %x, Dec: %d, Char: %c, String: %s\n", 255, 255, 'A', "Hello");

//     // Additional Tests
//     compare_printf("Unsigned: %u\n", 4294967295U);
//     compare_printf("Pointer: %p\n", (void*)0x12345678);
//     compare_printf("String: %s\n", "Test string");
//     compare_printf("Character: %c\n", 'A');
//     compare_printf("Percentage: %%\n");

//     return 0;
// }


int	main(void)
{
	// int i, j;
	// long	p1, p2;

	// ft_printf("%x\n", 0);
	// ft_printf("%x\n", 255);
	// ft_printf("%x\n", INT_MIN);
	// ft_printf("%x\n", INT_MAX);
	// printf("\n---printf---\n");
	// printf("%x\n", 0);
	// printf("%x\n", 255);
	// printf("%x\n", INT_MIN);
	// printf("%x\n", INT_MAX);

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
	ft_printf("Pointer: %p\n", (void*)0x12345678);
	ft_printf("String: %s\n", "Test string");
	ft_printf("Character: %c\n", 'A');
	ft_printf("Percentage: %%\n");

	//printf
	printf("\n\n**printf**\n\n");
	// Basic Tests
	printf("%x\n", 0);
	printf("%x\n", 255);
	printf("%x\n", INT_MIN);
	printf("%x\n", INT_MAX);

	// Edge Cases
	printf("%lx\n", LONG_MIN);
	printf("%lx\n", LONG_MAX);
	printf("%lx\n", ULONG_MAX);
	printf("%x\n", -1);

	// Mixed Tests
	printf("Hex: %x, Dec: %d, Char: %c, String: %s\n", 255, 255, 'A', "Hello");

	// Additional Tests
	printf("Unsigned: %u\n", 4294967295U);
	printf("Pointer: %p\n", (void*)0x12345678);
	printf("String: %s\n", "Test string");
	printf("Character: %c\n", 'A');
	printf("Percentage: %%\n");


	return (0);
}
