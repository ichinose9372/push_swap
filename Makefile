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
			srcs/error/all_free.c\

HEAD_FILE = include/push_swap.h

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = ft_printf_42tokyo
PRINTF =$(PRINTF_DIR)/libftprintf.a

RM		=	rm -f

OBJS = $(SRCS:.c=.o)

.PHONY:	all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $@

$(OBJS) : %.o: %.c $(HEAD_FILE)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT) :
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)
	$(MAKE) clean -C $(PRINTF_DIR)
fclean:	clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(MAKE) fclean -C $(PRINTF_DIR)
	$(RM) $(OBJS)
re:		fclean all

