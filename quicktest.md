// gcc eval_main.c -L. -lft_printf -o eval_test

// eval_main.c
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h> // For INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX

int main() {
    int ret_user, ret_std;
    int i;

    printf("--- NULL Pointer Tests ---\n");
    printf("NULL (printf): %p\n", NULL);
    ft_printf("NULL (ft_printf): %p\n", NULL);
    ft_printf("NULL as Hex (ft_printf): %x\n", (unsigned int)(unsigned long)NULL);
    printf("NULL as Hex (printf): %x\n", (unsigned int)(unsigned long)NULL);
    ft_printf(" Space and 1 as Pointer (ft_printf): %p \n", (void *)1);
    ft_printf(" Space and 15 as Pointer (ft_printf): %p \n", (void *)15);
    ft_printf(" Max/Min ULONG as Pointer (ft_printf): %p %p \n", (void *)ULONG_MAX, (void *)-ULONG_MAX);
    ft_printf(" Zero as Pointer (ft_printf): %p %p \n", (void *)0, (void *)0);

    printf("\n--- Basic Hexadecimal Tests ---\n");
    printf("Hex 0 (printf): %x\n", 0);
    ft_printf("Hex 0 (ft_printf): %x\n", 0);
    printf("Hex 255 (printf): %x\n", 255);
    ft_printf("Hex 255 (ft_printf): %x\n", 255);
    printf("Hex INT_MIN (printf): %x\n", INT_MIN);
    ft_printf("Hex INT_MIN (ft_printf): %x\n", INT_MIN);
    printf("Hex INT_MAX (printf): %x\n", INT_MAX);
    ft_printf("Hex INT_MAX (ft_printf): %x\n", INT_MAX);

    printf("\n--- Edge Case Hexadecimal Tests ---\n");
    printf("Hex LONG_MIN (printf): %lx\n", LONG_MIN); // Use %lx for long
    ft_printf("Hex LONG_MIN (ft_printf): %lx\n", LONG_MIN);
    printf("Hex LONG_MAX (printf): %lx\n", LONG_MAX); // Use %lx for long
    ft_printf("Hex LONG_MAX (ft_printf): %lx\n", LONG_MAX);
    printf("Hex ULONG_MAX (printf): %lx\n", ULONG_MAX); // Use %lx for unsigned long
    ft_printf("Hex ULONG_MAX (ft_printf): %lx\n", ULONG_MAX);
    printf("Hex -1 (printf): %x\n", -1);
    ft_printf("Hex -1 (ft_printf): %x\n", -1);

    printf("\n--- Mixed Format Tests ---\n");
    printf("Hex (printf): %x, Dec (printf): %d, Char (printf): %c, String (printf): %s\n", 255, 255, 'A', "Hello");
    ft_printf("Hex (ft_printf): %x, Dec (ft_printf): %d, Char (ft_printf): %c, String (ft_printf): %s\n", 255, 255, 'A', "Hello");

    printf("\n--- Additional Tests ---\n");
    printf("Unsigned (printf): %u\n", 4294967295U);
    ft_printf("Unsigned (ft_printf): %u\n", 4294967295U);
    i = 12345678;
    printf("Pointer (printf): %p\n", &i);
    ft_printf("Pointer (ft_printf): %p\n", &i);
    printf("String (printf): %s\n", "Test string");
    ft_printf("String (ft_printf): %s\n", "Test string");
    printf("Character (printf): %c\n", 'A');
    ft_printf("Character (ft_printf): %c\n", 'A');
    printf("Percentage (printf): %%\n");
    ft_printf("Percentage (ft_printf): %%\n");

    return 0;
}
