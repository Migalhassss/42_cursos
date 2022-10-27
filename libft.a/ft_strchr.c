/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarrel <micarrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:47:23 by micarrel          #+#    #+#             */
/*   Updated: 2022/10/27 10:19:08 by micarrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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