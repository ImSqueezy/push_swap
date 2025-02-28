NAME = push_swap
OBJS = parsing.o main.o
INCLUDES = printf/ft_printf.h Libft/libft.h

CFLAGS = -Wall -Wextra -Werror

LIBFT_OBJS = $(addprefix Libft/, ft_isdigit.o ft_atoi.o ft_split.o ft_strlen.o ft_lstnew_bonus.o ft_lstadd_back_bonus.o \
	ft_lstlast_bonus.o)
LIBFT_PREFIX = Libft/
LIBFT = Libft/libft.a

PRINTF_OBJS = $(addprefix printf/, ft_putchar_count.o ft_puthex_count.o ft_putnbr_count.o \
		ft_putptr_count.o ft_putstr_count.o ft_putu_count.o ft_printf.o)
PRINTF_PREFIX = printf/
PRINTF = printf/libftprintf.a

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	cc $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o push_swap

$(LIBFT):
	make -C $(LIBFT_PREFIX)

$(PRINTF):
	make -C $(PRINTF_PREFIX)

%.o: %.c $(INCLUDES)
	cc $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS) $(LIBFT_OBJS) $(PRINTF_OBJS)

fclean: clean
	@rm -f $(NAME) $(LIBFT) $(PRINTF)

re: fclean all