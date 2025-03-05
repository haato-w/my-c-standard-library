#include "libft.h"

void	putstr_fd(char *s, int fd)
{
	size_t	s_len;

	s_len = strlen(s);
	write(fd, s, s_len);
}

// int main(void)
// {
//   putstr_fd("abc", STDOUT_FILENO);
//   putstr_fd("\n", STDOUT_FILENO);
//   putstr_fd("a   a", STDOUT_FILENO);
//   putstr_fd("\n", STDOUT_FILENO);
//   putstr_fd("12342", STDOUT_FILENO);
//   putstr_fd("\n", STDOUT_FILENO);
// }
