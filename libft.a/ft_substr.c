/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarrel <micarrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:37:41 by micarrel          #+#    #+#             */
/*   Updated: 2022/10/26 11:06:26 by micarrel         ###   ########.fr       */
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
    temp = (char *)malloc(sizeof(char) * (len + 1));
    if (temp == NULL)
    {
        return (NULL);
    }
    while (i < len && s[i] != '\0') 
    {
        temp[j] = s[i];
        i++;
        j++;
    }

    return (temp);
}