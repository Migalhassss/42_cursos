#include "libft.h"

void *ft_memmove (void *str1, const void *str2, size_t n)
{
    size_t i;
    unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;

    if (str1 < str2)
    {
        i = n;
        while(i > 0)
        {
            ptr[i] = ptr2[i];
            i--;
        }
    }
    else 
    {
        while (i < n)
        {
            ptr[i] = ptr2[i];
            i++;
        }
    }
    return (str1);
}