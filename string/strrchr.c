#include "string.h"

char	*_strrchr(const char *s, int c)
{
	size_t	s_len;
	size_t	i;

	s_len = _strlen(s);
	i = s_len;
	while (0 < i && s[i] != (char)c)
	{
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char s1[] = "hello";
// 	char c1 = 'o';
// 	printf("%s\n", _strrchr(s1, c1));
// 	char s2[] = "hello";
// 	char c2 = 'l';
// 	printf("%s\n", _strrchr(s2, c2));
// 	char s3[] = "hello";
// 	char c3 = 'a';
// 	printf("%s\n", _strrchr(s3, c3));
// 	char s4[] = "";
// 	char c4 = '1';
// 	printf("%s\n", _strrchr(s4, c4));
// 	char s5[] = "hello";
// 	char c5 = 'h';
// 	printf("%s\n", _strrchr(s5, c5));
// 	char s6[] = "hello";
// 	char c6 = '\0';
// 	printf("%s\n", _strrchr(s6, c6));

// 	char s7[] = "teste";
// 	char c7 = 't';
// 	printf("%s\n", _strrchr(s7, c7));
// 	char s8[] = "teste";
// 	char c8 = 'e';
// 	printf("%s\n", _strrchr(s8, c8));
// 	char s9[] = "teste";
// 	char c9 = '\0';
// 	printf("%s\n", _strrchr(s9, c9));
// 	char s10[] = "teste";
// 	char c10 = 'a';
// 	printf("%s\n", _strrchr(s10, c10));
// 	char s11[] = "teste";
// 	char c11 = 'e' + 256;
// 	printf("%s\n", _strrchr(s11, c11));
// 	char s12[] = "teste";
// 	char c12 = '1024';
// 	printf("%s\n", _strrchr(s12, c12));
// }
