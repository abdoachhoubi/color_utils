#ifndef COLOR_UTILS_H
# define COLOR_UTILS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

// Convertion utils
int		rgb_to_int(int r, int g, int b);
void	*int_to_rgb(int c);

// Validation utils
int		valide_rgb(int code);
int		valide_int(int c);

// output utils
void	ft_put_hex(unsigned int hex);
void	print_hex(unsigned int hex);
void	print_rgb(int *rgb);
void	print_dec(int nb);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putendl_fd(char *str, int fd);

// string manipulation utils
char	**ft_split(char const *s, char c);

// help and usage utils
void    help();

#endif