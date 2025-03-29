#include "string.h"

void	*_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*_s;

	_s = s;
	i = 0;
	while (i < n)
	{
		if (_s[i] == (unsigned char)c)
			return ((void *)&_s[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
//         char s1[] = "hello";
//         char c1 = 'h';
//         printf("%s\n", (unsigned char *)_memchr(s1, c1, 5));
//         char s2[] = "hello";
//         char c2 = 'l';
//         printf("%s\n", (unsigned char *)_memchr(s2, c2, 5));
//         char s3[] = "hello";
//         char c3 = 'a';
//         printf("%s\n", (unsigned char *)_memchr(s3, c3, 1));
//         char s4[] = "";
//         char c4 = '1';
//         printf("%s\n", (unsigned char *)_memchr(s4, c4, 0));
//         char s5[] = "hello";
//         char c5 = 'o';
//         printf("%s\n", (unsigned char *)_memchr(s5, c5, 5));
// }
