int	_isprint(int c)
{
	if (c <= 31 || 127 <= c)
		return (0);
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
//         char c1 = 127;
//         printf("%d\n", isprint(c1));
//         char c2 = 0;
//         printf("%d\n", isprint(c2));
//         char c3 = 'a';
//         printf("%d\n", isprint(c3));
//         char c4 = '1';
//         printf("%d\n", isprint(c4));
//         char c5 = ' ';
//         printf("%d\n", isprint(c5));
// }
