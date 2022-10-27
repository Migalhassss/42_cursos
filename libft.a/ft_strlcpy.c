/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarrel <micarrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:20:08 by micarrel          #+#    #+#             */
/*   Updated: 2022/10/27 16:20:09 by micarrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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