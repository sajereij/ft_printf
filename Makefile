# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 11:48:42 by sreijola          #+#    #+#              #
#    Updated: 2020/09/17 17:26:30 by sreijola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re test

NAME = libftprintf.a

TEST = az.out

LIBS_C = ft_isdigit.c ft_atoi.c ft_strdup.c ft_putchar_fd.c ft_strlen.c \
	ft_toupper.c ft_memalloc.c ft_bzero.c ft_strclr.c ft_strnequ.c ft_putstr_fd.c \
	ft_strcpy.c ft_strchr.c

LIB_PATH = ./libft/

LIB = $(addprefix $(LIB_PATH), $(LIBS_C))

LFT = ./libft/libft.a

SRCS_C = ft_printf.c ft_printf_fill_struct.c ft_printf_parse.c ft_pow.c\
	ft_printf_type_diouxxf.c ft_printf_type_csp.c ft_printf_adapter.c\
	ft_printf_adapter_preciser.c ft_printf_adapter_signer.c ft_printf_bonus.c\
	ft_printf_edgecases.c ft_printf_ldtoa.c ft_ulltoa_base.c ft_ulllen.c \
	ft_strndup_free.c ft_lltoa.c ft_lllen.c ft_strjoin_free.c ft_strround_up.c\
	ft_strrev.c ft_bigintlen.c ft_putstr_ret_fd.c ft_printf_putfstr_fd.c

SRCS_PATH = ./srcs/

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_C))

OBJS = $(patsubst %.c, %.o, $(LIBS_C) $(SRCS_C))

TEST_MAINS_C = man.c main_bonus.c main_basics.c main2.c main3.c \
	main_tagwp.c main_spacewp.c main_pluswp.c main_minuswp.c \
	main_multfwp.c main_multfw.c main_jumbo.c main_flwpf.c \
	main_lenmultfw.c main_neg.c main_leng.c

TESTS_PATH = ./eval_tests/

TESTS = $(addprefix $(TESTS_PATH), $(TEST_MAINS_C))

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -c $(SRCS) $(LIB) $(FLAGS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

test: $(TEST)

$(TEST):
	@make -C libft
	gcc $(TESTS) $(NAME) -o $(TEST) -Wall -Wextra
	#-Werror
	# @echo "tests made"

clean:
	@rm -f $(OBJS)
	@echo "Object files removed from libft. Beep-Bop"

fclean: clean
	@rm -f $(NAME) $(EXE)
	@echo "Binaries and object files gone."

re: fclean all
	@echo "All good again"

tclean:
	@rm -f $(TEST)
