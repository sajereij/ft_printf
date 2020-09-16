# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 11:48:42 by sreijola          #+#    #+#              #
#    Updated: 2020/09/16 17:32:09 by sreijola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

DUE = az.out

LIBS_C = ft_isdigit.c ft_atoi.c ft_strdup.c ft_putchar_fd.c ft_strlen.c \
	ft_toupper.c ft_memalloc.c ft_strclr.c ft_strnequ.c ft_putstr_fd.c \
	ft_strcpy.c ft_strchr.c

LIB_PATH = ./libft/

LIB = $(addprefix $(LIB_PATH), $(LIBS_C))

LFT = ./libft/libft.a

SRCS_C = ft_printf.c ft_printf_fill_struct.c ft_printf_parse.c \
	ft_printf_type_diouxXf.c ft_printf_type_csp.c ft_printf_adapter.c\
	ft_printf_adapter_preciser.c ft_printf_adapter_signer.c ft_printf_bonus.c\
	ft_printf_edgecases.c ft_printf_ldtoa.c ft_ulltoa_base.c ft_ulllen.c \
	ft_strndup_free.c ft_lltoa.c ft_lllen.c ft_strjoin_free.c ft_strround_up.c\
	ft_pow.c ft_strrev.c ft_bigintlen.c ft_putstr_ret_fd.c

SRCS_PATH = ./srcs/

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_C))

OBJS = $(patsubst %.c, %.o, $(LIBS_C) $(SRCS_C))

TEST_MAINS_C = man.c main.c main_basics.c main2.c main3.c \
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

clean:
	@rm -f $(OBJS)
	@echo "Object files removed from libft. Beep-Bop"

fclean: clean
	@rm -f $(NAME) $(EXE)
	@echo "Binaries and object files gone."

re: fclean all
	@echo "All good again"

test: $(TEST)

du: $(DUE)

$(DUE):
	@make -C libft
	gcc $(TESTS) $(NAME) -o $(DUE) -Wall -Wextra
	
	# @gcc main.c $(SRCS) $(LFT) -o q.out
	# @gcc main_basics.c $(SRCS)  -o a.out
	# @gcc main2.c $(SRCS) $(LIB) -o $(DUE)
	# @gcc main3.c $(SRCS) $(LFT) -o c.out

	# # ignored all; @gcc main_zerowp.c $(SRCS) $(LIB) -o z.out
	# @gcc main_tagwp.c $(SRCS) $(LIB) -o t.out
	# @gcc main_spacewp.c $(SRCS) $(LIB) -o s.out
	# @gcc main_pluswp.c $(SRCS) $(LIB) -o p.out
	# @gcc main_minuswp.c $(SRCS) $(LIB) -o m.out

	# @gcc main_multfwp.c $(SRCS) $(LFT) -o fwp.out
	# @gcc main_multfw.c $(SRCS) $(LFT) -o fw.out
	# @gcc main_jumbo.c $(SRCS) $(LFT) -o j.out
	# @gcc main_flwpf.c $(SRCS) $(LIB) -o l.out
	# @gcc main_lenmultfw.c $(SRCS) $(LIB) -o jl.out
	# @gcc main_neg.c $(SRCS) $(LIB) -o neg.out
	# @gcc main_leng.c $(SRCS) $(LIB) -o le.out
	# @gcc m.c $(SRCS) $(LIB) -o f.out

	#$(FLAGS)
	# @echo "executable2 made"
