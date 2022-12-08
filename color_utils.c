#include "color_utils.h"

int main(int ac, char **av)
{
    char    **rgb;

    if (ac > 1 || ac == 3)
    {
        if (ac == 2 && av[1][1] == 'h')
            help();
        else if (ac == 3)
        {
            if (av[1][1] == 'd')
            {
                if (av[1][2] == 'r')
                    print_rgb(int_to_rgb(atoi(av[2])));
                if (av[1][2] == 'h')
                    print_hex((unsigned int)atoi(av[2]));
            }
            else if (av[1][1] == 'r')
            {
                rgb = ft_split(av[2], ',');
                if (av[1][2] == 'd')
                    print_dec(rgb_to_int(atoi(rgb[0]), atoi(rgb[1]), atoi(rgb[2]))); 
                if (av[1][2] == 'h')
                    print_hex(rgb_to_int(atoi(rgb[0]), atoi(rgb[1]), atoi(rgb[2])));
            }
            else if (av[1][1] == 'h')
            {
                if (av[1][2] == 'r')
                    print_rgb(int_to_rgb((int)strtoul(&av[2][1], 0, 16)));
                if (av[1][2] == 'd')
                    print_dec((int)strtoul(&av[2][1], 0, 16));
            }
        }
    }
    else
        help();
    return (0);
}
