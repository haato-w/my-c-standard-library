#include "libft.h"

void	putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
//   putchar_fd('a', STDOUT_FILENO);
//   putchar_fd('\n', STDOUT_FILENO);
//   putchar_fd(' ', STDOUT_FILENO);
//   putchar_fd('\n', STDOUT_FILENO);
//   putchar_fd('1', STDOUT_FILENO);
//   putchar_fd('\n', STDOUT_FILENO);
// }
