#include "getline.h"

static void	*memset(void *s, int c, size_t len)
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

static void	bzero(void *s, size_t n)
{
	memset(s, 0, n);
}

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

void	*memcpy(void *dst, const void *src, size_t n)
{
	size_t	ind;
	char	*_dst;
	char	*_src;

	if (dst == NULL && src == NULL)
		return (dst);
	_dst = (char *)dst;
	_src = (char *)src;
	ind = 0;
	while (ind < n)
	{
		*_dst = *_src;
		_dst++;
		_src++;
		ind++;
	}
	return (dst);
}
