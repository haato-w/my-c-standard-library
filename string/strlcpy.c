#include "string.h"

size_t	_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	ret;

	ret = _strlen(src);
	if (dstsize == 0)
		return (ret);
	idx = 0;
	while (src[idx] != '\0' && idx < dstsize - 1)
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return (ret);
}

// # include <stdio.h>
// # include <string.h>

// int main(void)
// {
// 	char s1[] = "hello";
// 	// char *s1 = NULL;
// 	char s2[10] = "abc";
// 	char s3[10];
// 	printf("%d\n", _strlcpy(s2, s1, 0));
// 	printf("%s\n", s2);
// 	printf("%d, %s\n", _strlcpy(s3, s1, 3), s3);
// }
