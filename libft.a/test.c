
#include <stdlib.h>
#include <stdio.h>
static unsigned int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
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

unsigned ft_strlcpy(char *str1, char *str2, unsigned int size)
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
char				*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	outstr_size;
	char			*outstr_start;
	char			*outstr_end;
	char			*outstr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	outstr_start = (char *)&s1[i];
	if ((i = ft_strlen(s1) - 1) != -1)
		while (i >= 0 && is_in_set(s1[i], set))
			i--;
	outstr_end = (char *)&s1[i];
	if (!*s1 || outstr_end == outstr_start)
		outstr_size = 2;
	else
		outstr_size = outstr_end - outstr_start + 2;
	if (!(outstr = malloc(sizeof(char) * outstr_size)))
		return (NULL);
	ft_strlcpy(outstr, outstr_start, outstr_size);
	return (outstr);
}

int main()
{
 	char const s[30] = " \t\nThis is string. \tContinue.";
    char const *a;
 	char *result; 
    result = ft_strtrim(s, a);
 	printf("The result is %s\n", result);	return 0;
}