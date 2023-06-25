NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
FILES = ft_printf.c ft_putpointer.c ft_putchar.c ft_putnbr_base.c ft_putstr.c ft_putnbr_di.c ft_putnbr_u.c
OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o: $(OBJS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all