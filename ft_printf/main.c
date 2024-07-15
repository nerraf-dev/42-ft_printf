#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>



int	main(void)
{
	// int i, j;
	// long	p1, p2;
	// p1 = LONG_MIN;
	// p2 = LONG_MAX;
	// printf("LONG_MIN: %p\n", p1);
	// printf("LONG_MAX: %p\n", p2);
	// printf("LONG_MIN: %ld\n", LONG_MIN);
	// printf("LONG_MAX: %ld\n", LONG_MAX);
	// printf("INT_MIN: %d\n", INT_MIN);
    // printf("INT_MAX: %d\n", INT_MAX);
    // printf("ULONG_MAX: %lu\n", ULONG_MAX);
    // printf("-ULONG_MAX: %ld\n", -((long)ULONG_MAX)); // Casting to long to print as signed
	// // i = ft_printf("%s", (char *)NULL);
	printf("%d\n", -10);
	// // ft_printf("ft: %%age test\n");
	// // printf("%%age test\n");
	// // ft_printf("ft: Favourite letter: %c\n", 'c');
	// // printf("Favourite letter: %c\n", 'c');
	// // ft_printf("Hello, %s!\n", "world");
	// // printf("Hello, %s!", "world");
	// // ft_printf("ft: %d\n", 42.123);
	// // printf("ft: %f\n", 42.123);
	// // ft_printf("Hex: %X\n", 15);
	// // printf("Hex: %X\n", 15);
	// // i = ft_printf("U: %u\n", -10);
	// // ft_printf("U: %u\n", -10);
	// // printf("%d\n", i);
	// // i = ft_printf("U: %u\n", 0);
	// // ft_printf("U: %u\n", 0);
	// // printf("%d\n", i);



	// // ft_printf("Hex: %X\n", -10);
	// // printf("Hex: %X\n", -10);
	// // ft_printf("Hex: %X\n", 10);
	// // printf("Hex: %X\n", 10);
	// // i = ft_printf("Hex in: %x\n", 0xabcdef);
	// // printf("%d\n", i);
	// // ft_printf("Hex in: %x\n", 0xabcdef);
	// // printf("Hex in: %x\n", 0xabcdef);

	// // ft_printf("Hello\nWorld!\n");
	// // printf("Hello\nWorld!\n");

	// // i = ft_printf("\a\b\f\n\r\t\v\\\'\n");
	// // j = printf("\a\b\f\n\r\t\v\\\'\n");
	// // ft_printf("\a\b\f\n\r\t\v\\\'\n");
	// // printf("\a\b\f\n\r\t\v\\\'\n");
	// // printf(">>: %d %d", i, j);

	// // printf("\n\n\n");

	// // i = 42;
	// // ft_printf("(ft)P to int: %p\n", &i);
	// // printf("P to int: %p\n", &i);

	// // char *str = "";
	// ft_printf("(ft)P empt-str: ");
	// i = ft_printf("%p\n", "");
	// ft_printf("P empt-str:     ");
	// j = printf("%p\n", "");
	// printf("i %i j %i\n", i, j);

	// ft_printf("(ft)P NULL: ");
	// i = ft_printf("%p\n", NULL);
	// ft_printf("P NULL:     ");
	// j = printf("%p\n", NULL);
	// printf("i %i j %i\n", i, j);

	// i = ft_printf("(ft)P -1: %p\n", 1);
	// // j = printf("P -1: %p\n", -1);
	// // printf("i %i j %i\n", i, j);

	// ft_printf("LONG_MIN: %p\n", LONG_MIN);
	// ft_printf("LONG_MAX: %p\n", LONG_MAX);
	// ft_printf("INT_MIN: %d\n", INT_MIN);
    // ft_printf("INT_MAX: %d\n", INT_MAX);
    // ft_printf("ULONG_MAX: %d\n", ULONG_MAX);
    // ft_printf("-ULONG_MAX: %d\n", -((long)ULONG_MAX));

	// 	ft_printf("\"\" %p\n", "");
	// 	ft_printf("Null %p\n", NULL);
	// 	ft_printf("%p\n", (void *)-14523);
	// 	ft_printf("0x%p-\n", (void *)ULONG_MAX);
	// 	ft_printf("%pp%p%p\n", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);

    // 	ft_printf("\n\n\n----\n\n\n");
	// 	ft_printf("0: %x \n", 0);
		ft_printf(" %p %p \n", LONG_MAX, LONG_MIN);
		ft_printf(" %x %x \n", LONG_MAX, LONG_MIN);
	// 	ft_printf(" %x \n", ULONG_MAX);
	// 	ft_printf(" %x \n", 9223372036854775807LL);
		ft_printf(" %x %x\n", 0, -42);
		ft_printf("%x\n", LONG_MAX);
		printf("%lx\n", LONG_MAX);
		ft_printf(" %x %x %x %x\n", LONG_MIN, ULONG_MAX, 0, -42);
		ft_printf(" %x %x %x %x %x\n", LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		ft_printf(" %x %x %x %x %x %x\n", INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
		ft_printf(" %x %x %x\n", INT_MAX, 0, -42);
		ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

		ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
		ft_printf("\n");
		ft_printf("'?AZ}%%Y<\vB\n\r%s` kVtT3Il&%sKZQ7JCh%s%seRxN:\t*\t`I%i)Oe3H$=%X+P[", "1IH<\n-P6)#<,^T1{!5 (d!N@Fj/4hQ4:.", "51FEFD$!", "m`.o{!n\",p;jc{d\tgP*Xfqu0 l\ryOo:1|<Jy\vv}=4iU^)s)3enl\f;]vb1n6g", "8Fbz\f", 979557052, 1619394509);
		ft_printf("\n");
		printf("'?AZ}%%Y<\vB\n\r%s` kVtT3Il&%sKZQ7JCh%s%seRxN:\t*\t`I%i)Oe3H$=%X+P[", "1IH<\n-P6)#<,^T1{!5 (d!N@Fj/4hQ4:.", "51FEFD$!", "m`.o{!n\",p;jc{d\tgP*Xfqu0 l\ryOo:1|<Jy\vv}=4iU^)s)3enl\f;]vb1n6g", "8Fbz\f", 979557052, 1619394509);
		ft_printf("\n*** %x\n",1619394509);
		ft_printf("\n");
		 ft_printf("|ff\n4$a,%XzV%pRr\rD~%ux^{D!%u[|7w%cL.A%sc~ x:as`o%uVa~o~J. %pn%X/*f'MPK(Ss%urBcOn->\2_", -1370909417, (void *)8552694227409186160, -1274609178, -1042304390, -1270368574, "hH5kEh", 355835187, (void *)-3274344416609969615, -2035308898, 1527896388);
		 printf("\n\n printf\n\n");
		 printf("|ff\n4$a,%XzV%pRr\rD~%ux^{D!%u[|7w%cL.A%sc~ x:as`o%uVa~o~J. %pn%X/*f'MPK(Ss%urBcOn->\2_", -1370909417, (void *)8552694227409186160, -1274609178, -1042304390, -1270368574, "hH5kEh", 355835187, (void *)-3274344416609969615, -2035308898, 1527896388);

	return (0);
}
