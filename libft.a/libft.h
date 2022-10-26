#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

void    *ft_memset(void *s, int c, size_t len);
int ft_strlen(char const *str);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void    ft_bzero(void *s, size_t len);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strrchr(const char *str, int a);
unsigned ft_strlcpy(char *str1, char const *str2, unsigned int size);
char *ft_strchr(const char *str, int a);

#endif