
NAME = libftprintf.a
SHARED = ./santa/libftprintf.so

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
SANTA = git@github.com:paulo-santana/ft_printf_tester.git


all : so $(NAME)

$(NAME) : $(LIBFT) $(OBJS)
	ar -rcs $(NAME) $(LIBFT) $(OBJS)

$(LIBFT) :
	make --no-print-directory -C $(LIBFTPATH) all

so : $(NAME) $(SHARED)

$(SHARED) : $(OBJS) $(LIBFT)

	$(CC) -fPIC $(CFLAGS) $(SRCS)
	gcc -shared -o $(SHARED) $(OBJS) $(LIBFT)

$(OBJSPATH)%.o : $(SRCSPATH)%.c
	$(CC) $(CFLAGS) $< -o $@


gt :
	$(GITCLONE) $(TRIPOULLE) ./tripoulle
	$(GITCLONE) $(SANTA) ../santa

dt :
	rm -rf ./tripoulle ../santa

ut : dt gt


clean :
	make --no-print-directory -C $(LIBFTPATH) clean
	rm -f $(OBJS)

fclean : clean
	make --no-print-directory -C $(LIBFTPATH) fclean
	rm -f $(NAME) $(SHARED)

re : fclean all

.PHONY : all clean fclean re gt dt ut shared
