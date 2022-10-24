#include "libft.h"

int ft_isascii(int i)
{
    if (i >= 0 && i <= 255)
    {
        return (1);
    }
    return (0);
}