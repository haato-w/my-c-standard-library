#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <stdbool.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

#ifndef __APPLE__
# define OPEN_MAX 1000
#endif

typedef struct s_file
{
	char		buf[BUFFER_SIZE];
	char		*buf_head;
	ssize_t		n;
}	t_file;

typedef struct s_string
{
	char		*buf;
	size_t		len;
	size_t		buf_size;
}	t_string;

char	*getline(int fd);
void	*calloc(size_t count, size_t size);
void	*memcpy(void *dst, const void *src, size_t n);

#endif
