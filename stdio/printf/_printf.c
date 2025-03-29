#include "_printf.h"

static int	put_specifier_content(const char *format, va_list *ap, int width)
{
	if (*format == 'c')
		return (put_type_c(ap, width));
	else if (*format == 's')
		return (put_type_s(ap, width));
	else if (*format == 'p')
		return (put_type_p(ap, width));
	else if (*format == 'd')
		return (put_type_d(ap, width));
	else if (*format == 'i')
		return (put_type_d(ap, width));
	else if (*format == 'u')
		return (put_type_u(ap, width));
	else if (*format == 'x')
		return (put_type_x(ap, width, false));
	else if (*format == 'X')
		return (put_type_x(ap, width, true));
	else if (*format == '%')
	{
		_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

static int	process_specifier(const char **format, va_list *ap)
{
	int	width;
	int	ret;

	(*format)++;
	width = _atoi(*format);
	while (_isdigit(**format))
		(*format)++;
	ret = put_specifier_content(*format, ap, width);
	(*format)++;
	return (ret);
}

static int	_vprintf(const char *format, va_list *ap)
{
	size_t	ret;

	ret = 0;
	while (*format)
	{
		if (*format == '%')
			ret += process_specifier(&format, ap);
		else
		{
			_putchar_fd(*format, 1);
			format++;
			ret++;
		}
	}
	return (ret);
}

int	printf(const char *format, ...)
{
	va_list	ap;
	size_t	ret;

	va_start(ap, format);
	ret = _vprintf(format, &ap);
	va_end(ap);
	return (ret);
}

