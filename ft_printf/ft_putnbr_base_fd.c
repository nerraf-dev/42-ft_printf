#include "ft_printf.h"

//TODO: Clean up comments and make notes!
char	*ft_putnbr_base_fd(unsigned long n, char *base) {

	int					base_len;
	int					len;
	unsigned long		num;
	char				*str;

	base_len = ft_strlen(base);
	len = 1;
	num = n;
	if (base_len < 2)
		return (NULL);
	// Calculate the length of the resulting string
	while (num >= (unsigned long)base_len)
	{
		num /= base_len;
		len++;
	}

	// Problems when allocating and freeing space!
	str = malloc(len + 1); // Allocate space for "0" and null terminator
	if (!str)
		return (NULL);
	str[len] = '\0'; // Null terminate the string
	while (len > 0)
	{
		len--;
		str[len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}
