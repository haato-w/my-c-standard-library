int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char c1 = '1';
// 	printf("%d\n", isdigit(c1));
// 	char c2 = '3';
//         printf("%d\n", isdigit(c2));
// 	char c3 = '9';
//         printf("%d\n", isdigit(c3));
// 	char c4 = 'a';
//         printf("%d\n", isdigit(c4));
// 	char c5 = '!';
//         printf("%d\n", isdigit(c5));
// }
