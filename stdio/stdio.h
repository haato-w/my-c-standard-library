#ifndef STDIO_H
# define STDIO_H
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include <stdint.h>
# include "../ctype/ctype.h"
# include "../stdlib/stdlib.h"
# include "../string/string.h"

void	putchar_fd(char c, int fd);
void	putstr_fd(char *s, int fd);
void	putendl_fd(char *s, int fd);
void	putnbr_fd(int n, int fd);

#endif
