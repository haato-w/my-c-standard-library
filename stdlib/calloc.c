#include "libft.h"

static bool	is_valid(size_t count, size_t size)
{
	if (count > SIZE_MAX / size)
		return (false);
	return (true);
}

void	*calloc(size_t count, size_t size)
{
	unsigned char	*ret;

	if (count != 0 && size != 0 && !is_valid(count, size))
		return (NULL);
	ret = (unsigned char *)malloc(size * count);
	if (ret == NULL)
		return (NULL);
	bzero(ret, size * count);
	return ((void *)ret);
}

// #include <stdio.h>
// #include <stdlib.h>
// void show(void *p, int b)
// {
//   int i = 0;

//   unsigned char *t = p;
//   while (i < b)
//   {
//     if (t[i] == 0)
//       printf("0");
//     i++;
//   }
//   printf("\n");
// }
