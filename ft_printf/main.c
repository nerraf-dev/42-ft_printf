#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int i, j;

	i = ft_printf("%s", (char *)NULL);
	printf("%d\n", i);
	ft_printf("ft: %%age test\n");
	printf("%%age test\n");
	ft_printf("ft: Favourite letter: %c\n", 'c');
	printf("Favourite letter: %c\n", 'c');
	ft_printf("Hello, %s!\n", "world");
	printf("Hello, %s!", "world");
	ft_printf("ft: %d\n", 42.123);
	printf("ft: %f\n", 42.123);
	ft_printf("Hex: %X\n", 15);
	printf("Hex: %X\n", 15);
	i = ft_printf("U: %u\n", -10);
	ft_printf("U: %u\n", -10);
	printf("%d\n", i);
	i = ft_printf("U: %u\n", 0);
	ft_printf("U: %u\n", 0);
	printf("%d\n", i);



	ft_printf("Hex: %X\n", -10);
	printf("Hex: %X\n", -10);
	ft_printf("Hex: %X\n", 10);
	printf("Hex: %X\n", 10);
	i = ft_printf("Hex in: %x\n", 0xabcdef);
	printf("%d\n", i);
	ft_printf("Hex in: %x\n", 0xabcdef);
	printf("Hex in: %x\n", 0xabcdef);

	ft_printf("Hello\nWorld!\n");
	printf("Hello\nWorld!\n");

	i = ft_printf("\a\b\f\n\r\t\v\\\'\n");
	j = printf("\a\b\f\n\r\t\v\\\'\n");
	ft_printf("\a\b\f\n\r\t\v\\\'\n");
	printf("\a\b\f\n\r\t\v\\\'\n");
	printf(">>: %d %d", i, j);

	return (0);
}
// \a      Write a <bell> character.
//            \b      Write a <backspace> character.
//            \f      Write a <form-feed> character.
//            \n      Write a <new-line> character.
//            \r      Write a <carriage return> character.
//            \t      Write a <tab> character.
//            \v      Write a <vertical tab> character.
//            \´      Write a <single quote> character.
//            \\      Write a backslash character.
//            \num    Write a byte whose value is the 1-, 2-, or 3-digit octal number num.
