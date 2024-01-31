
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

GITCLONE = git clone
TRIPOULLE = git@github.com:Tripouille/printfTester.git


all : $(NAME)

$(NAME) : $(LIBFT) $(OBJS)
	ar -rcs $(NAME) $(LIBFT) $(OBJS)

$(LIBFT) :
	make --no-print-directory -C $(LIBFTPATH) all

$(OBJSPATH)%.o : $(SRCSPATH)%.c
	$(CC) $(CFLAGS) $< -o $@



get_testers :
	$(GITCLONE) $(TRIPOULLE) tripoulle-test

delete_testers :
	rm -rf ./tripoulle-test

update_testers : delete_testers get_testers


clean :
	make --no-print-directory -C $(LIBFTPATH) clean
	rm -f $(OBJS)

fclean : clean
	make --no-print-directory -C $(LIBFTPATH) fclean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re get_testers delete_testers update_testers
