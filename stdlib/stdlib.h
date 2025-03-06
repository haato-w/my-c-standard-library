#ifndef STDLIB_H
# define STDLIB_H
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include <stdint.h>
# include "../string/string.h"

int		_atoi(const char *str);
void	_bzero(void *s, size_t n);
void	*_calloc(size_t count, size_t size);
char	*_itoa(int n);

#endif
