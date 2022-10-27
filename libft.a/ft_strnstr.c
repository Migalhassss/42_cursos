#include <stdio.h>

char	*ft_strnstr(const char *str, const char *ch, size_t i)
{
	int	j;
	unsigned char ptr;
	unsigned char ptr2;


	j = 0;
	if (ch[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == ch[j] && str[i + j] != '\0')
			j++;
		if (ch[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}