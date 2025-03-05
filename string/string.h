#ifndef STRING_H
# define STRING_H
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include <stdint.h>
# include "../ctype/ctype.h"
# include "../stdlib/stdlib.h"

size_t	_strlen(const char *s);
void	*_memset(void *b, int c, size_t len);
void	*_memcpy(void *dst, const void *src, size_t n);
void	*_memmove(void *dst, const void *src, size_t len);
size_t	_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	_strlcat(char *dst, const char *src, size_t dstsize);
char	*_strchr(const char *s, int c);
char	*_strrchr(const char *s, int c);
int		_strncmp(const char *s1, const char *s2, size_t n);
void	*_memchr(const void *s, int c, size_t n);
int		_memcmp(const void *s1, const void *s2, size_t n);
char	*_strnstr(const char *haystack, const char *needle, size_t len);
char	*_strdup(const char *s1);
char	*_substr(char const *s, unsigned int start, size_t len);
char	*_strjoin(char const *s1, char const *s2);
char	*_strtrim(char const *s1, char const *set);
char	**_split(char const *s, char c);
char	*_strmapi(char const *s, char (*f)(unsigned int, char));
void	_striteri(char *s, void (*f)(unsigned int, char*));

#endif
