// ft_printf/test_ft_printf.c
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>

// Function to capture the output of printf and ft_printf
void test_ft_printf(const char *format, ...)
{
    char buffer1[1024] = {0};
    char buffer2[1024] = {0};
    FILE *fp;
    va_list args, args_copy;

    // Capture output of printf
    fp = freopen("output1.txt", "w+", stdout);
    if (fp == NULL) {
        perror("freopen");
        return;
    }
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    fflush(stdout);
    fseek(fp, 0, SEEK_SET);
    fread(buffer1, sizeof(char), 1024, fp);
    fclose(fp);

    // Reset stdout
    freopen("/dev/tty", "w", stdout);

    // Capture output of ft_printf
    fp = freopen("output2.txt", "w+", stdout);
    if (fp == NULL) {
        perror("freopen");
        return;
    }
    va_start(args, format);
    va_copy(args_copy, args);
    ft_printf(format, args_copy);
    va_end(args_copy);
    va_end(args);
    fflush(stdout);
    fseek(fp, 0, SEEK_SET);
    fread(buffer2, sizeof(char), 1024, fp);
    fclose(fp);

    // Reset stdout
    freopen("/dev/tty", "w", stdout);

    // Compare the outputs
    if (strcmp(buffer1, buffer2) == 0)
    {
        printf("Test passed for format: %s\n", format);
    }
    else
    {
        printf("Test failed for format: %s\n", format);
        printf("Expected: %s\n", buffer1);
        printf("Actual  : %s\n", buffer2);
    }
}

int main(void)
{
	// Basic Tests
	test_ft_printf("%x\n", 0);
	test_ft_printf("%x\n", 255);
	test_ft_printf("%x\n", INT_MIN);
	test_ft_printf("%x\n", INT_MAX);

	// Edge Cases
	test_ft_printf("%x\n", LONG_MIN);
	test_ft_printf("%x\n", LONG_MAX);
	test_ft_printf("%x\n", ULONG_MAX);
	test_ft_printf("%x\n", -1);

	// Mixed Tests
	test_ft_printf("Hex: %x, Dec: %d, Char: %c, String: %s\n", 255, 255, 'A', "Hello");

	// Additional Tests
	test_ft_printf("Unsigned: %u\n", 4294967295U);
	test_ft_printf("Pointer: %p\n", (void*)0x12345678);
	test_ft_printf("String: %s\n", "Test string");
	test_ft_printf("Character: %c\n", 'A');
	test_ft_printf("Percentage: %%\n");

	return 0;
}
