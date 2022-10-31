/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarrel <micarrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:34:47 by micarrel          #+#    #+#             */
/*   Updated: 2022/10/31 15:25:57 by micarrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c)
{
	size_t i;
    size_t j;

	i = 0;
	j = 0;
	while (*str != '\0')
	{
		if (*str != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if (*str == c)
			j = 0;
		str++;
	}
	return (i);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
    size_t  len;
	int		index;
	char	**final;

	if (!s || !(final = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
    len = ft_strlen(s);
    index = -1;
	while (i <= len)
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == len) && index >= 0)
		{
			final[j++] = ft_substr(s, index, i);
			index = -1;
		}
		i++;
	}
	final[j] = 0;
	return (final);
}