/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarrel <micarrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:37:41 by micarrel          #+#    #+#             */
/*   Updated: 2022/10/31 16:22:30 by micarrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    unsigned int j;
    char *temp;
    
    i = start;
    j = 0;
    temp = (char *)malloc(sizeof(char) * (len - start + 1));
    if (temp == NULL)
    {
        return (NULL);
    }
    while (i < len) 
    {
 	    temp[j] = s[i];
        i++;
        j++;
    }
	temp[j] = '\0';
    return (temp);
}