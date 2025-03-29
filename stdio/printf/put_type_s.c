#include "_printf.h"

int	put_type_s(va_list *ap, int width)
{
	char		*content;
	size_t		content_len;
	int			ret;

	content = va_arg(*ap, char *);
	if (content == NULL)
	{
		_putstr_fd("(null)", 1);
		ret = 6;
	}
	else
	{
		content_len = _strlen(content);
		if (content_len < (size_t)width)
		{
			put_space(width - content_len);
			ret = width;
		}
		else
			ret = content_len;
		_putstr_fd(content, 1);
	}
	return (ret);
}
