#include "libft.h"

static	int	count_n_length(long n)
{
	int		res_len;
	long	t;

	if (n == 0)
		return (1);
	t = n;
	res_len = 0;
	if (n < 0)
		res_len += 1;
	while (t != 0)
	{
		res_len += 1;
		t /= 10;
	}
	return (res_len);
}

static	void	put_digit_fd(long n, int fd)
{
	char	c;

	c = '0' + (n % 10);
	if (count_n_length(n) > 1)
		put_digit_fd(n / 10, fd);
	write(fd, &c, 1);
}

void	putnbr_fd(int n, int fd)
{
	long	t;

	t = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		t *= -1;
	}
	put_digit_fd(t, fd);
}

// #include <stdio.h>
// #include <limits.h>
// int main(void)
// {
// 	printf("correct answer: %d\n", 1234);
// 	putnbr_fd(1234, STDOUT_FILENO);
// 	putstr_fd("\n", STDOUT_FILENO);
// 	printf("correct answer: %d\n", -1234);
// 	putnbr_fd(-1234, STDOUT_FILENO);
// 	putstr_fd("\n", STDOUT_FILENO);
// 	printf("correct answer: %d\n", 0);
// 	putnbr_fd(0, STDOUT_FILENO);
// 	putstr_fd("\n", STDOUT_FILENO);
// 	printf("correct answer: %d\n", INT_MAX);
// 	putnbr_fd(INT_MAX, STDOUT_FILENO);
// 	putstr_fd("\n", STDOUT_FILENO);
// 	printf("correct answer: %d\n", INT_MIN);
// 	putnbr_fd(INT_MIN, STDOUT_FILENO);
// 	putstr_fd("\n", STDOUT_FILENO);
// 	printf("correct answer: %d\n", 1);
// 	putnbr_fd(1, STDOUT_FILENO);
// 	putstr_fd("\n", STDOUT_FILENO);
// 	printf("correct answer: %d\n", -1);
// 	putnbr_fd(-1, STDOUT_FILENO);
// 	putstr_fd("\n", STDOUT_FILENO);
// }
