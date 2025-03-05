int	ft_tolower(int c)
{
	if ('A' <= (char)c && (char)c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
//         char c1 = 'h';
//         printf("%c\n", tolower(c1));
//         char c2 = ' ';
//         printf("%c\n", tolower(c2));
//         char c3 = 'L';
//         printf("%c\n", tolower(c3));
//         char c4 = '1';
//         printf("%c\n", tolower(c4));
//         char c5 = '!';
//         printf("%c\n", tolower(c5));
// }
