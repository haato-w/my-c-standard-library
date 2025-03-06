int	_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char c1 = 'a';
// 	printf("%d\n", isalpha(c1));
// 	char c2 = 'f';
// 	printf("%d\n", isalpha(c2));
// 	char c3 = 'A';
//         printf("%d\n", isalpha(c3));
// 	char c4 = 'Z';
//         printf("%d\n", isalpha(c4));
// 	char c5 = '1';
//         printf("%d\n", isalpha(c5));
// }
