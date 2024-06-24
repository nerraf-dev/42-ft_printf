#include "ft_printf.h"

void	ft_putnbr_base_fd(int n, char *base, int fd)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n / base_len)
			ft_putnbr_base_fd(n / -base_len, base, fd);
		ft_putchar_fd(base[-(n % base_len)], fd);
	}
	else
	{
		if (n / base_len)
			ft_putnbr_base_fd(n / base_len, base, fd);
		ft_putchar_fd(base[n % base_len], fd);
	}
}
