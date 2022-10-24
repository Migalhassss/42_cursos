#include "libft.h"

int len(char *str)
{
    int i;
    i = 0;
    
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

unsigned int ft_strlcat(char *str1, char *str2, unsigned int size)
{ 
    unsigned int i;
    unsigned int j;
    unsigned int dlen;
    unsigned int slen;

    i = 0;
    j = 0;

    while(str1[i] != '\0')
    {
        i++;
    }
    dlen = i;
    slen = len(str2);
    if(size == 0 || size >= dlen)
    {
        return (slen = size);
    }   
    while (str2[i] != '\0' && i < size - dlen - 1)
    {
        str1[j] = str2[i];
        i++;
        j++;
    }
    str1[j] = '\0';
    return (dlen + slen);
}