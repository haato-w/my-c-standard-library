#include "string.h"

void	_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	s_len;
	size_t	i;

	s_len = _strlen(s);
	i = 0;
	while (i < s_len)
	{
		f(i, s + i);
		i++;
	}
}

// void f(unsigned int idx, char *s)
// {
//   if (idx % 2 == 1)
//     s[idx] = ' ';
// }

// #include <stdio.h>
// int main(void)
// {
//   char s1[] = "aaaaaaa";
//   _striteri(s1, f);
//   printf("%s\n", s1);
//   char s2[] = "abcdefg";
//   _striteri(s2, f);
//   printf("%s\n", s2);
//   char s3[] = "";
//   _striteri(s3, f);
//   printf("%s\n", s3);
//   char s4[] = "a";
//   _striteri(s4, f);
//   printf("%s\n", s4);
// }
