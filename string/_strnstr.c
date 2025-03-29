#include "string.h"

char	*_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_haystack;
	size_t	len_needle;
	size_t	idx;

	len_haystack = _strlen(haystack);
	len_needle = _strlen(needle);
	if (len_needle == 0)
		return ((char *)haystack);
	idx = 0;
	while (idx + len_needle <= len && idx + len_needle <= len_haystack)
	{
		if (_strncmp(haystack + idx, needle, len_needle) == 0)
		{
			return ((char *)(haystack + idx));
		}
		idx++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
//   char *s1 = "hello world";
//   char *s2 = "hello";
//   char *s3 = " wor";
//   char *s4 = "aaa";

//   printf("%s\n", _strnstr(s1, s2, 10));
//   printf("%s\n", _strnstr(s1, s2, 3));
//   printf("%s\n", _strnstr(s1, s3, 10));
// 	printf("%s\n", _strnstr(s1, s4, 10));
//   return (0);
// }
