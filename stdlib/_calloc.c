#include "stdlib.h"

static bool	is_valid(size_t count, size_t size)
{
	if (count > SIZE_MAX / size)
		return (false);
	return (true);
}

void	*_calloc(size_t count, size_t size)
{
	unsigned char	*ret;

	if (count != 0 && size != 0 && !is_valid(count, size))
		return (NULL);
	ret = (unsigned char *)malloc(size * count);
	if (ret == NULL)
		return (NULL);
	_bzero(ret, size * count);
	return ((void *)ret);
}
