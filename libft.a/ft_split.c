/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micarrel <micarrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:34:47 by micarrel          #+#    #+#             */
/*   Updated: 2022/10/27 17:11:24 by micarrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static char *counter_len(char const *s, char c)
{
    size_t i;
    size_t j;
    char *strc;
    
    i = 0;
    j = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            while (s1[i] == c)
            {
                i++;
            }
        }
        else
        {
            
            while(s1[i] != c)
            {
                strc[j] = s1[i];
                j++;
                i++;
            }
            return (j);
        }
        i++;
    }
}

static char *counter_start(char const *s, char c)
{
    size_t i;
    size_t j;
    char *strc;
    
    i = 0;
    j = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            while (s1[i] == c)
            {
                i++;
            }
            return(c)
        }
        i++;
    }
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t size;
    size_t len;
    size_t start;
    char    **final;

    i = 0;
    size = (char *)malloc(sizeof(char) * (s, c));

    while (s[i] != '\0')
    {
        
        i++;
    }
}