#include "stdio.h"

void	_putendl_fd(char *s, int fd)
{
	_putstr_fd(s, fd);
	_putchar_fd('\n', fd);
}

// int main(void)
// {
//   putendl_fd("abc", STDOUT_FILENO);
//   putendl_fd("a   a", STDOUT_FILENO);
//   putendl_fd("12342", STDOUT_FILENO);
// }
