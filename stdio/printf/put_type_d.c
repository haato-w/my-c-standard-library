#include "_printf.h"

int	put_type_d(va_list *ap, int width)
{
	int			content;
	char		*content_str;
	size_t		content_len;
	int			ret;

	content = va_arg(*ap, int);
	content_str = _itoa(content);
	content_len = _strlen(content_str);
	if (content_len < (size_t)width)
	{
		put_space(width - content_len);
		ret = width;
	}
	else
	{
		ret = content_len;
	}
	_putstr_fd(content_str, 1);
	free(content_str);
	return (ret);
}
