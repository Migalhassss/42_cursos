#include "libft.h"

int ft_strncmp(char *str1, char *str2, size_t n)
{
    while (str1 == str2 && *str2 != '\0' && n > 0)
    {
        str1++;
        str2++;
        n--;
    }
    if(n == 0)
    {
        return (0);
    }
    return(*(unsigned char *)str1 - *(unsigned char  *)str2);
}
