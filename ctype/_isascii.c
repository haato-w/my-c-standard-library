int	_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char c1 = '0';
// 	char c2 = 'a';
// 	char c3 = '!';
// 	char c4 = ' ';
// 	printf("%d\n", isascii(c1));
// 	printf("%d\n", isascii(c2));
// 	printf("%d\n", isascii(c3));
// 	printf("%d\n", isascii(c4));
// 	printf("%d\n", isascii(300));
// }
