#include "string.h"

char	*_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	i;
	char	*ret;

	s_len = _strlen(s);
	ret = _calloc(sizeof(char), s_len + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	return (ret);
}

// char f(unsigned int idx, char c)
// {
//   if (idx % 2 == 1)
//     return (' ');
//   return (c);
// }

// #include <stdio.h>
// int main(void)
// {
//   printf("%s\n", _strmapi("aaaaaaa", f));
//   printf("%s\n", _strmapi("abcdefg", f));
//   printf("%s\n", _strmapi("", f));
//   printf("%s\n", _strmapi("a", f));
// }
