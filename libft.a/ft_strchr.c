/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarrel <micarrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:47:23 by micarrel          #+#    #+#             */
/*   Updated: 2022/10/24 17:12:27 by micarrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *str, int a)
{   
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == a)
        {
            return ((char *) str[i]);
        }
        i++;
    }
    if (a == '\0')
    {
        return ((char *)str[i]);
    }
    return (0);
}

int main (void) {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}