#include "libft.h"

void	putendl_fd(char *s, int fd)
{
	putstr_fd(s, fd);
	putchar_fd('\n', fd);
}

// int main(void)
// {
//   putendl_fd("abc", STDOUT_FILENO);
//   putendl_fd("a   a", STDOUT_FILENO);
//   putendl_fd("12342", STDOUT_FILENO);
// }
