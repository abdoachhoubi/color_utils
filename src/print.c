#include "../color_utils.h"

// prints an Hex result
void    print_hex(unsigned int hex)
{
    ft_putstr_fd("\n\tHex: #", 1);
    ft_put_hex(hex);
    ft_putstr_fd("\n\n", 1);
}

// Prints a Decimal result
void    print_dec(int nb)
{
    ft_putstr_fd("\n\tDecimal: ", 1);
    ft_putnbr_fd(nb, 1);
    ft_putstr_fd("\n\n", 1);
}

// Prints an rgb table result
void    print_rgb(int *rgb)
{
    printf("\n\trgb(%d, %d, %d)\n", rgb[0], rgb[1], rgb[2]);
    printf("\n\tRed: %d\n\tGreen: %d\n\tBlue: %d\n\n", rgb[0], rgb[1], rgb[2]);
}

// Prints a single character to a specific file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// Prints a string to a specific file descriptor
void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}

// Prints a string followed by a new line to a specific file descriptor
void	ft_putendl_fd(char *str, int fd)
{
	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}

// prints an integer to a specific file descriptor
void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(nb + 48, fd);
	}
}

// Used to resolve an unsigned int to hex operation
void ft_put_hex(unsigned int hex)
{
    char *base = "0123456789ABCDEF";

    if (hex < 16)
        ft_putchar_fd(base[hex % 16], 1);
    else if (hex >= 16)
    {
        ft_put_hex(hex / 16);
        ft_put_hex(hex % 16);
    }
}
