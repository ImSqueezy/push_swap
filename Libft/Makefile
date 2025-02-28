OBJS = ft_isdigit.o ft_lstnew_bonus.o ft_lstadd_back_bonus.o ft_lstlast_bonus.o ft_atoi.o ft_split.o \
	ft_strlen.o
FLAGS = -Wall -Wextra -Werror -c
COMPILE = cc $(FLAGS)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(COMPILE) $< -o $@

re: clean all

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)