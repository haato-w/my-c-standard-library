#include "string.h"

int	_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*_s1;
	const unsigned char	*_s2;
	size_t				i;

	_s1 = s1;
	_s2 = s2;
	i = 0;
	while (i < n && _s1[i] == _s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (_s1[i] - _s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
//         printf("%d\n", _memcmp("hello", "hello", 5));
//         printf("%d\n", _memcmp("", "", 0));
//         printf("%d\n", _memcmp("aaa", "fff", 3));
//         printf("%d\n", _memcmp("fff", "aaa", 3));
//         printf("%d\n", _memcmp(" ", "!", 1));
// }
