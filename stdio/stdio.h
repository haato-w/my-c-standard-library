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

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
