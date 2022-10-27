/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarrel <micarrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:58:57 by micarrel          #+#    #+#             */
/*   Updated: 2022/10/27 17:58:12 by micarrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

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

int check(char const *s1 , char const *set, size_t i)
{
    size_t j;
    
    j = 0;
    while(set[j] != '\0')
    {
        if (s1[i] == set[j])
        {   
            return (1);
        }
        j++;
    }
        return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
    size_t  s;
	char	*str;
    
    s = 0; 
    i = 0;
    j = ft_strlen(s1);
    
    str = (char *)malloc(sizeof(char) * (j - i + 1));
    if (str == NULL)
    {
        return (NULL);
    }
    while (s1[i] != '\0')
    {
        if(check(s1, set, i) == 1)
        {
        }
        else
        {
            str[s] = s1 [i];
            s++;
        }
        i++;
    }
    return (str);
}

