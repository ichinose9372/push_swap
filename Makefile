NAME	=	push_swap

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	main.c\
			srcs/makelist/list_init.c\
			srcs/makelist/lst_utils.c\
			srcs/makelist/cord_comp.c\
			srcs/check/check_arg.c\
			srcs/oparations/oparation_push.c\
			srcs/oparations/oparation_rotate.c\
			srcs/oparations/oparation_revers_rotate.c\
			srcs/oparations/oparation_swap.c\
			srcs/sort/sort_over_six.c\
			srcs/sort/sort_four_five.c\
			srcs/sort/sort_two_three.c\
			srcs/sort/sort_over_six_b.c\
			srcs/sort/sort.c\
			srcs/error/error.c\

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
