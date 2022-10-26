#include "libft.h"

void *ft_calloc (int count, int size)
{
    int b;
    void *p;

    if (count == 0 || size == 0)
    {
        count = 1;
        size = 1;
    }
    b = count * size;
    p = malloc(b);
    if (p == NULL)
    {
        return (NULL);
    }
    else
    {
        ft_bzero(p, b);
    }
    return (p);
}