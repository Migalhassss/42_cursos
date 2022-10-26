/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarrel <micarrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:58:57 by micarrel          #+#    #+#             */
/*   Updated: 2022/10/26 15:54:42 by micarrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char const *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strchr(const char *str, int a)
{   
    unsigned int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == a)
        {
            return ((char *) str + i);
        }
        i++;
    }
    if (a == '\0')
    {
        return ((char *)str + i);
    }
    return (0);
}

unsigned ft_strlcpy(char *str1, char const *str2, unsigned int size)
{
    unsigned int i;
    unsigned int x;

    i = 0;
    x = 0;
    while (str2[i] != '\0')
    {
        i++;
    }
    if (size != 0)
    {
        while (str2[x] != '\0' && x < size - 1)
        {
         str1[x] = str2[x];
         x++;
        }
        str1[x] = '\0';
    }
    return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;
    
}


int main()
{
 	char const s[30] = " \tThis is string.    ";
    char const a[] = "Continue   ";
 	char *result; 
    result = ft_strtrim(s,a);
 	printf("The result is %s\n", result);	return 0;
}