#include "../color_utils.h"

// Converts rgb color code to int
int rgb_to_int(int r, int g, int b)
{
    if (valide_rgb(r) && valide_rgb(g) && valide_rgb(b))
        return (256 * 256 * r + 256 * g + b);
    ft_putendl_fd("\033[1;31Error: RGB value is not valide\n\033[0m", 2);
    ft_putendl_fd("Note: The (r, g, b) values should be greater than or equal to 0,", 1);
    ft_putendl_fd("and less than or equal to 255", 1);
    return (-1);
}

// converts int color code into rgb
void *int_to_rgb(int c)
{
    int *rgb;

    rgb = (int *)malloc(3 * sizeof (int));
    if (!rgb){
        ft_putendl_fd("\033[1;31mError: Couldn't allocate memory for the rgb array!\033[0m", 2);
        return (NULL);}
    if (valide_int(c))
    {
        rgb[2] = c % 256;
        rgb[1] = ((c - rgb[2]) / 256) % 256;
        rgb[0] = ((c - rgb[2]) / (256 * 256)) - rgb[1] / 256;
        return (rgb);
    }
    ft_putendl_fd("\033[1;31mError: Decimal value is not valide\033[0m", 2);
    ft_putendl_fd("Note: The value should be greater than or equal to 0,", 1);
    ft_putendl_fd("and less than or equal to 16777215", 1);
    return (NULL);
}
