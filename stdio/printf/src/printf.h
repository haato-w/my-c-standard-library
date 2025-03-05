#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		printf(const char *format, ...);
void	put_space(int width);
void	put_ptr_as_hex(uintptr_t ptr_uint);
int		base_n_len(unsigned int value, unsigned int n);
void	put_as_base_n(unsigned int value, unsigned int n, bool is_big);
int		put_type_x(va_list *ap, int width, bool is_big);
int		put_type_u(va_list *ap, int width);
int		put_type_d(va_list *ap, int width);
int		put_type_p(va_list *ap, int width);
int		put_type_s(va_list *ap, int width);
int		put_type_c(va_list *ap, int width);

#endif
