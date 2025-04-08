// gcc eval_main.c -L. -lft_printf -o eval_test

// eval_main.c
#include "ft_printf.h"
#include <stdio.h> // For standard printf for comparison

int main() {
    int ret_user, ret_std;

    printf("--- Test Case 1 ---\n");
    ret_user = ft_printf("Hello, %s!\n", "Evaluator");
    ret_std = printf("Hello, %s!\n", "Evaluator");
    printf("ft_printf returned: %d, printf returned: %d\n", ret_user, ret_std);

    printf("\n--- Test Case 2 ---\n");
    ret_user = ft_printf("Integer: %d\n", 42);
    ret_std = printf("Integer: %d\n", 42);
    printf("ft_printf returned: %d, printf returned: %d\n", ret_user, ret_std);

    // ... more test cases ...

    return 0;
}
