int	_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('A' <= c && c <= 'Z') || \
			('a' <= c && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char c1 = '0';
// 	char c2 = '9';
// 	char c3 = 'A';
// 	char c4 = 'f';
// 	char c5 = '!';
// 	printf("%d\n", isalnum(c1));
// 	printf("%d\n", isalnum(c2));
// 	printf("%d\n", isalnum(c3));
// 	printf("%d\n", isalnum(c4));
// 	printf("%d\n", isalnum(c5));
// }
