int	ft_toupper(int c)
{
	if ('a' <= (char)c && (char)c <= 'z')
		c -= 32;
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
//         char c1 = 'h';
//         printf("%c\n", toupper(c1));
//         char c2 = '1';
//         printf("%c\n", toupper(c2));
//         char c3 = ' ';
//         printf("%c\n", toupper(c3));
//         char c4 = 'H';
//         printf("%c\n", toupper(c4));
//         char c5 = '!';
//         printf("%c\n", toupper(c5));
// }
