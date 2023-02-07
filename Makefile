NAME	=	push_swap

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	main.c\
			list_init.c\
			lst_utils.c\
			oparation_push.c\
			oparation_rotate.c\
			oparation_revers_rotate.c\
			oparation_swap.c\
			sort_over_seven.c\
			sort_six.c\
			sort_three.c\
			sort_two.c

HEAD	=	push_swap.h

LIBFT = libft/libft.a

PRINTF = ft_printf_42tokyo/libftprintf.a

RM		=	rm -f

OBJS = $(SRCS:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	make -C libft
	make -C ft_printf_42tokyo
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $@

clean:
	$(RM) $(OBJS)
	make clean -C libft
	make clean -C ft_printf_42tokyo
fclean:	clean
	$(RM) $(NAME)
	make fclean -C libft
	make fclean -C ft_printf_42tokyo

re:		fclean all

.PHONY:	all clean fclean re
