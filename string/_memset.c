#include "string.h"

void	*_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*t;

	t = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		*t = (unsigned char)c;
		t++;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int N = 10;
// 	char a[N];
// 	_memset(a, '@', N);
// 	a[N - 1] = '\0';
// 	printf("%s\n", a);
// 	return (0);
// }
