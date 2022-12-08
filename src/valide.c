#include "../color_utils.h"

// Checks if a certain rgb color code is valide or not
int valide_rgb(int code)
{
    if (code >= 0 && code <= 255)
        return (1);
    return (0);
}

// Checks if a certain int color code is valide or not
int valide_int(int c)
{
    if (c >= 0 && c <= 16777215)
        return (1);
    return (0);
}
