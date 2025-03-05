# I move all functions to each directories.
# This Makefile have been modified yet.

SRCS = _isalpha.c _isdigit.c _isalnum.c _isascii.c \
			_isprint.c _strlen.c _memset.c _bzero.c \
			_memcpy.c _memmove.c _strlcpy.c _strlcat.c \
			_toupper.c _tolower.c _strchr.c _strrchr.c \
			_strncmp.c _memchr.c _memcmp.c _strnstr.c \
			_atoi.c _calloc.c _strdup.c _substr.c \
			_strjoin.c _strtrim.c _split.c _itoa.c \
			_strmapi.c _striteri.c _putchar_fd.c _putstr_fd.c \
			_putendl_fd.c _putnbr_fd.c

OBJS = $(SRCS:.c=.o)

BONUS = _lstnew_bonus.c _lstadd_front_bonus.c _lstsize_bonus.c _lstlast_bonus.c \
				_lstadd_back_bonus.c _lstdelone_bonus.c _lstclear_bonus.c	_lstiter_bonus.c \
				_lstmap_bonus.c

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME = libs.a

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAG) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:				fclean $(NAME)

bonus:	$(OBJS) $(BONUS_OBJS)
	# $(CC) $(CFLAGS) $(NAME) $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:	all clean fclean re bonus
