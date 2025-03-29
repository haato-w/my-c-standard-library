#ifndef STDIO_H
# define STDIO_H
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include <stdint.h>
# include "getline/_getline.h"
# include "printf/_printf.h"
# include "../ctype/ctype.h"
# include "../stdlib/stdlib.h"
# include "../string/string.h"

void	_putchar_fd(char c, int fd);
void	_putstr_fd(char *s, int fd);
void	_putendl_fd(char *s, int fd);
void	_putnbr_fd(int n, int fd);

#endif
