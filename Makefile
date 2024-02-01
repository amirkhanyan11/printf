
NAME = libftprintf.a
SHARED = ./santa/libftprintf.so

ROOT = ./
SRCSPATH = ./srcs/
OBJSPATH = ./objs/
DEPPATH = ./dependencies/
LIBFTPATH = ./libft/
INCPATH = ./includes/ ./libft/

SRCS = $(wildcard $(SRCSPATH)*.c)
OBJS = $(patsubst $(SRCSPATH)%.c,$(OBJSPATH)%.o,$(SRCS))
DEPS = $(patsubst $(OBJSPATH)%.o,$(DEPPATH)%.d,$(OBJS))
LIBFT = $(LIBFTPATH)*.o

CC = cc
DEPFLAGS = -MP -MD
CFLAGS = -Wall -Wextra -Werror -c $(foreach H,$(INCPATH),-I$(H)) $(DEPFLAGS)

GITCLONE = git clone
TRIPOULLE = git@github.com:Tripouille/printfTester.git
SANTA = git@github.com:paulo-santana/ft_printf_tester.git


all : $(NAME)

$(NAME) : $(LIBFT) $(OBJS)
	ar -rcs $(NAME) $(LIBFT) $(OBJS)

$(LIBFT) :
	make -C $(LIBFTPATH) all

so : $(NAME) $(SHARED)

$(SHARED) : $(OBJS) $(LIBFT)

	$(CC) -fPIC $(CFLAGS) $(SRCS)
	gcc -shared -o $(SHARED) $(OBJS) $(LIBFT)

$(OBJSPATH)%.o : $(SRCSPATH)%.c
	$(CC) $(CFLAGS) $< -o $@
	mv $(OBJSPATH)*.d $(DEPPATH)

gt :
	$(GITCLONE) $(TRIPOULLE) ./tripoulle
	$(GITCLONE) $(SANTA) ./santa

dt :
	rm -rf ./tripoulle ./santa

ut : dt gt


clean :
	make -C $(LIBFTPATH) clean
	rm -f $(OBJS) $(DEPS)

fclean : clean
	make -C $(LIBFTPATH) fclean
	rm -f $(NAME) $(SHARED)

re : fclean all

.PHONY : all clean fclean re gt dt ut shared

-include $(DEPS)
