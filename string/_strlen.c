#include "string.h"

size_t	_strlen(const char *s)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		s++;
		cnt++;
	}
	return (cnt);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s = "hello";
// 	printf("%zu\n", _strlen(s));
// }
