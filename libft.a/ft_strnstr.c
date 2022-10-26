#include <stdio.h>

char	*ft_strstr(char *str, char *ch)
{
	int	i;
	int	j;

	i = 0;
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