NAME = push_swap
OBJS = parsing.c main.c
INCLUDES = printf/ft_printf.h Libft/libft.h

CFLAGS = -Wall -Wextra -Werror

LIBFT_OBJS = $(addprefix Libft/, ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o \
        ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o \
        ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_strdup.o ft_calloc.o ft_substr.o ft_substr.o ft_strjoin.o ft_strtrim.o \
        ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o)
LIBFT_PREFIX = Libft/
LIBFT = Libft/libft.a

PRINTF_OBJS = $(addprefix printf/, ft_putchar_count.o ft_puthex_count.o ft_putnbr_count.o \
		ft_putptr_count.o ft_putstr_count.o ft_putu_count.o ft_printf.o)
PRINTF_PREFIX = printf/
PRINTF = printf/libftprintf.a

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