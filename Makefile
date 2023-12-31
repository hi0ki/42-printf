SRCS = \

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall, -Wextra -Werror
AR = ar rcs
RM = rm -f
NAME = libftprintf.a

all:	$(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re:	fclean all

.PHONY fclean clean all re
