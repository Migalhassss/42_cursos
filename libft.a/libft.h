#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int ft_atoi(const char *str);
void    ft_bzero(void *s, size_t len);
void *ft_calloc (int count, int size);
int ft_isalpha(int i);
int ft_isascii(int i);
int ft_isdigit(int i);
int ft_isprint(int i);
int	ft_isalnum(int i);
void	*ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memmove (void *str1, const void *str2, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char **ft_split(char const *s, char c);
char *ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *str1, char const *str2, size_t size);
int ft_strncmp(char *str1, char *str2, size_t n);
char	*ft_strnstr(const char *str, const char *ch, size_t i);
char	*ft_strtrim(char const *s1, char const *set);
void    *ft_memset(void *s, int c, size_t len);
int ft_strlen(char const *str);
void	*ft_memcpy(void *dest, const void *src, size_t len);
char *ft_strrchr(const char *str, int a);
unsigned ft_strlcpy(char *str1, char const *str2, unsigned int size);
char *ft_strchr(const char *str, int a);
int ft_tolower(int a);
int ft_toupper(int a);

#endif