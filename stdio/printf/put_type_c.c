#include "printf.h"

int	put_type_c(va_list *ap, int width)
{
	char	content;
	int		ret;

	content = va_arg(*ap, int);
	if (1 < width)
	{
		put_space(width - 1);
		ret = width;
	}
	else
		ret = 1;
	putchar_fd(content, 1);
	return (ret);
}
