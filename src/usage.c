#include "../color_utils.h"

static void    gnl()
{
    int i;
    char c;

    ft_putstr_fd("Type \"Q\" and press \"Enter\" to exit: ", 1);
    i  = read(0, &c, 1);
    if (c == 'q' || c == 'Q')
        exit(1) ;
    while (c != 'q' && c != 'Q')
    {
        i  = read(0, &c, 1);
    }
    exit(1);
}

void    help()
{
    ft_putendl_fd("\033[1;33m########################## COLOR UTILS - ASTROBOY ##########################\n\n\033[0m", 1);
    ft_putendl_fd("\033[1;33mNAME\033[0m", 1);
    ft_putendl_fd("\tcolor_utils", 1);
    ft_putendl_fd("\n\033[1;33mSYNOPSIS\033[0m", 1);
    ft_putendl_fd("\t./color_utils [-dr -rd -dh -hd -rh -hr] <color code>", 1);
    ft_putendl_fd("\t./color_utils -h", 1);
    ft_putendl_fd("\n\033[1;33mDESCRIPTION\033[0m", 1);
    ft_putendl_fd("\tcolor_utils is a util used to perform color code conversions", 1);
    ft_putendl_fd("\n\tThe following options are available:", 1);
    ft_putendl_fd("\n\t-dr\tConverts a decimal color code to rgb", 1);
    ft_putendl_fd("\n\t-rd\tConverts a rgb color code to decimal", 1);
    ft_putendl_fd("\n\t-dh\tConverts a decimal color code to hex", 1);
    ft_putendl_fd("\n\t-hd\tConverts a hex color code to decimal", 1);
    ft_putendl_fd("\n\t-rh\tConverts a rgb color code to hex", 1);
    ft_putendl_fd("\n\t-hr\tConverts a hex color code to rgb", 1);
    ft_putendl_fd("\n\033[1;33mCOLOR CODE FORMATS\033[0m", 1);
    ft_putendl_fd("\tThe <color code> argument should respect these formats:", 1);
    ft_putendl_fd("\n\trgb\t\"r,g,b\"\texample: \"200,200,200\"", 1);
    ft_putendl_fd("\n\thex\t\"#HEX\"\texample: \"#FF3300\"", 1);
    ft_putendl_fd("\n\tdecimal\t\"integer\"\texample: \"8001303\"", 1);
    ft_putendl_fd("\033[1;33m\n\n############################################################################\033[0m", 1);
    gnl();
}
