#ifndef STDLIB_H
# define STDLIB_H
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include <stdint.h>
# include "../ctype/ctype.h"
# include "../string/string.h"

int		atoi(const char *str);
void	bzero(void *s, size_t n);
void	*calloc(size_t count, size_t size);
char	*itoa(int n);

#endif
