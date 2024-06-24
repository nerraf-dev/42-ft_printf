#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("%s", (char *)NULL);
	ft_printf("ft: %%age test");
	printf("%%age test");
	ft_printf("ft: Favourite letter: %c", 'c');
	printf("Favourite letter: %c", 'c');
	ft_printf("Hello, %s!", "world");
	printf("Hello, %s!", "world");
	ft_printf("ft: %d", 42.123);
	printf("ft: %f", 42.123);
	ft_printf("Hex: %X", 15);
	printf("Hex: %X\n", 15);


	return (0);
}
