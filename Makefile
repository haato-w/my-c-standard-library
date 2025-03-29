ROOT_DIR := .

CTYPE_DIR := $(addprefix $(ROOT_DIR)/, ctype)
CTYPE_SRCS := $(addprefix $(CTYPE_DIR)/, \
                    _isalpha.c _isdigit.c _isalnum.c _isascii.c \
                    _isprint.c _toupper.c _tolower.c \
              )

STDIO_DIR := $(addprefix $(ROOT_DIR)/, stdio)
GETLINE_DIR := $(addprefix $(STDIO_DIR)/, getline)
GETLINE_SRC := $(addprefix $(GETLINE_DIR)/, \
                    _getline.c \
               )
PRINTF_DIR := $(addprefix $(STDIO_DIR)/, printf)
PRINTF_SRCS = $(addprefix $(PRINTF_DIR)/, \
                _printf.c put_type_helpers.c put_type_c.c put_type_s.c \
                put_type_p.c put_type_d.c put_type_u.c put_type_x.c \
              )
STDIO_SRCS := $(addprefix $(STDIO_DIR)/, \
                    _putchar_fd.c _putstr_fd.c _putendl_fd.c _putnbr_fd.c \
              ) \
              $(GETLINE_SRC) \
              $(PRINTF_SRCS)

STDLIB_DIR := $(addprefix $(ROOT_DIR)/, stdlib)
STDLIB_SRCS := $(addprefix $(STDLIB_DIR)/, \
                    _atoi.c _bzero.c _calloc.c _itoa.c \
               )

STRING_DIR := $(addprefix $(ROOT_DIR)/, string)
STRING_SRCS := $(addprefix $(STRING_DIR)/, \
                    _memchr.c _memcmp.c _memcpy.c _memmove.c \
                    _memset.c _split.c _strchr.c _strdup.c \
                    _striteri.c _strjoin.c _strlcat.c _strlcpy.c \
                    _strlen.c _strmapi.c _strncmp.c _strnstr.c \
                    _strrchr.c _strtrim.c _substr.c \
               )

SRCS := $(CTYPE_SRCS) $(STDIO_SRCS) $(STDLIB_SRCS) $(STRING_SRCS)

OBJS = $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME = clibs.a

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:  fclean $(NAME)

.PHONY:	all clean fclean re
