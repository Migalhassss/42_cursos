/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarrel <micarrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:30:37 by micarrel          #+#    #+#             */
/*   Updated: 2022/10/27 15:33:36 by micarrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove (void *str1, const void *str2, size_t n)
{
    size_t i;
    unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;

    i = 0;
    if (str1 > str2)
    {
        i = n;
        while(i > 0)
        {
            i--;
            ((unsigned char *)ptr)[i] = ((unsigned char *)ptr2)[i];
        }
    }
    else 
    {
        i = 0;
        while (i < n)
        {
            ((unsigned char *)ptr)[i] = ((unsigned char *)ptr2)[i];
            i++;
        }
    }
    return (str1);
}