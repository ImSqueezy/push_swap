NAME_BONUS = checker
NAME = push_swap

GNL_OBJS = $(addprefix gnl/, get_next_line.o get_next_line_utils.o)
OPERATIONS = $(addprefix Operations/, push.o swap.o rotate.o rrotate.o)
BONUS_OPERATIONS = $(addprefix Operations/, push_bonus.o swap_bonus.o \
	rotate_bonus.o rrotate_bonus.o)
OBJS = parsing.o parsing_utils.o main.o push_swap.o push_swap_utils.o \
	mini_sorts.o $(OPERATIONS)
BOBJS = $(addprefix Checker/, checker_bonus.o checker_utils_bonus.o \
	doaction_utils_bonus.o parsing_bonus.o parsing_utils_bonus.o lst_bonus.o \
	$(GNL_OBJS) $(BONUS_OPERATIONS))
INCLUDES = printf/ft_printf.h Libft/libft.h Operations/operations.h \
	Checker/Operations/operations_bonus.h Checker/gnl/get_next_line.h \
	Checker/checker_bonus.h
CFLAGS = -Wall -Wextra -Werror

LIBFT_OBJS = $(addprefix $(LIBFT_PREFIX), ft_isdigit.o ft_atoi.o ft_split.o ft_strlen.o \
	ft_lstlast_bonus.o ft_lstnew_bonus.o ft_lstadd_back_bonus.o ft_lstclear_bonus.o \
	ft_lstdelone_bonus.o ft_lstlast_bonus.o ft_lstsize_bonus.o)
LIBFT_PREFIX = Libft/
LIBFT = Libft/libft.a

PRINTF_OBJS = $(addprefix $(PRINTF_PREFIX), ft_putchar_count.o ft_puthex_count.o ft_putnbr_count.o \
		ft_putptr_count.o ft_putstr_count.o ft_putu_count.o ft_printf.o)
PRINTF_PREFIX = printf/
PRINTF = printf/libftprintf.a

all: $(NAME)

bonus: $(NAME_BONUS)

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	cc $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(NAME_BONUS): $(LIBFT) $(BOBJS)
	cc $(CFLAGS) $(BOBJS) $(LIBFT) -o $(NAME_BONUS)

$(LIBFT): $(LIBFT_OBJS)
	make -C $(LIBFT_PREFIX)

$(PRINTF): $(PRINTF_OBJS)
	make -C $(PRINTF_PREFIX)

%.o: %.c $(INCLUDES)
	cc $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS) $(LIBFT_OBJS) $(PRINTF_OBJS) $(BOBJS)

fclean: clean
	@rm -f $(NAME) $(LIBFT) $(PRINTF) $(NAME_BONUS)

re: fclean all