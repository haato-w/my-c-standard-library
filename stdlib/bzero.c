#include "stdlib.h"

void	bzero(void *s, size_t n)
{
	memset(s, 0, n);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int N = 10;
// 	char a[N];
// 	int i = 0;
// 	bzero(a, N);
// 	a[N - 1] = '\0';
// 	while (i < N)
// 	{
// 		printf("%d", a[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
