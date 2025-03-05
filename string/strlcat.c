#include "string.h"

size_t	_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	idx;
	size_t	len_dest;
	size_t	len_src;

	len_dest = _strlen(dst);
	len_src = _strlen(src);
	if (dstsize <= len_dest)
		return (dstsize + len_src);
	idx = 0;
	while (idx < dstsize - len_dest - 1 && src[idx])
	{
		dst[len_dest + idx] = src[idx];
		idx++;
	}
	dst[len_dest + idx] = '\0';
	return (len_dest + len_src);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s1[15];
// 	s1[0] = 'h'; s1[1] = 'e'; s1[2] = 'l'; 
// 	s1[3] = 'l'; s1[4] = 'o'; s1[5] = '\0';
// 	char *s2 = " world";

// 	//printf("%u\n", _strlcat(s1, s2, 2));
// 	//printf("%u\n", _strlcat(s1, s2, 6));
// 	printf("%u\n", _strlcat(s1, s2, 10));
// 	//printf("%s\n", _strlcat(s1, s2));
// 	return (0);
// }
