#include "printf.h"

int	put_type_u(va_list *ap, int width)
{
	unsigned int	content;
	int				content_len;
	int				ret;

	content = va_arg(*ap, unsigned int);
	content_len = base_n_len(content, (unsigned int)10);
	if (content_len < width)
	{
		put_space(width - content_len);
		ret = width;
	}
	else
	{
		ret = content_len;
	}
	put_as_base_n(content, (unsigned int)10, false);
	return (ret);
}
