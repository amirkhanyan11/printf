
NAME = libftprintf.a

SRCSPATH = ./srcs/
OBJSPATH = ./objs/
LIBFTPATH = ./libft/
INCLUDES = ./includes/

SRCS = $(wildcard $(SRCSPATH)*.c)
OBJS = $(patsubst $(SRCSPATH)%.c,$(OBJSPATH)%.o,$(SRCS))
LIBFT = $(LIBFTPATH)*.o

CC = cc
CFLAGS = -Wall -Wextra -Werror -c

all : $(NAME)

$(NAME) : $(LIBFT) $(OBJS)
	ar -rcs $(NAME) $(LIBFT) $(OBJS)

$(LIBFT) :
	make --no-print-directory -C $(LIBFTPATH) all

$(OBJSPATH)%.o : $(SRCSPATH)%.c
	$(CC) $(CFLAGS) $< -o $@

clean :
	make --no-print-directory -C $(LIBFTPATH) clean
	rm -f $(OBJS)

fclean : clean
	make --no-print-directory -C $(LIBFTPATH) fclean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
