# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 11:48:42 by sreijola          #+#    #+#              #
#    Updated: 2020/08/17 00:24:12 by sreijola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

EXE = x.out

DUE = b.out

LIBS_C = ft_isdigit.c ft_atoi.c ft_strdup.c ft_putchar_fd.c ft_strlen.c \
	ft_toupper.c ft_memalloc.c ft_strclr.c ft_bzero.c \
	ft_putstr_fd.c ft_strncmp.c ft_strcpy.c ft_strsplit.c ft_count_words.c \
	ft_strjoin.c

LIB_PATH = ./libft/

LIB = $(addprefix $(LIB_PATH), $(LIBS_C))

LFT = ./libft/libft.a

SRCS_C = type.c typef.c ft_printf.c ft_putstr_ret_fd.c \
	adapter.c ft_strndup.c signer.c ft_lltoa.c ft_lllen.c \
	ft_ulltoa_base.c ft_ulllen.c ft_pow.c ft_strrev.c ft_ldtoa.c \
	ft_dtoa.c parse.c fill_struct.c bonus.c preciser.c

SRCS_PATH = ./srcs/

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_C))

OBJS = $(patsubst %.c, %.o, $(LIBS_C) $(SRCS_C))

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -c $(SRCS) $(LIB) $(FLAGS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

ex: $(EXE)

$(EXE):
	@gcc main.c $(NAME) -o $(EXE)
	# $(FLAGS)
	@echo "executable made"

du: $(DUE)

$(DUE):
	@make -C libft

	# @gcc main.c $(SRCS) $(LFT) -o q.out
	@gcc main_basics.c $(SRCS) $(LIB) -o a.out
	@gcc main2.c $(SRCS) $(LIB) -o $(DUE)
	# @gcc main2f.c $(SRCS) $(LIB) -o f.out
	@gcc main3.c $(SRCS) $(LFT) -o c.out

	# ignored all; @gcc main_zerowp.c $(SRCS) $(LIB) -o z.out
	@gcc main_tagwp.c $(SRCS) $(LIB) -o t.out
	@gcc main_spacewp.c $(SRCS) $(LIB) -o s.out
	@gcc main_pluswp.c $(SRCS) $(LIB) -o p.out
	@gcc main_minuswp.c $(SRCS) $(LIB) -o m.out

	@gcc main_multfwp.c $(SRCS) $(LFT) -o fwp.out
	@gcc main_multfw.c $(SRCS) $(LFT) -o fw.out
	@gcc main_jumbo.c $(SRCS) $(LFT) -o j.out
	@gcc main_flwpf.c $(SRCS) $(LIB) -o l.out
	# @gcc main_lenmultfw.c $(SRCS) $(LIB) -o l.out
	@gcc main_neg.c $(SRCS) $(LIB) -o neg.out
	# @gcc main_leng.c $(SRCS) $(LIB) -o le.out
	# @gcc m.c $(SRCS) $(LIB) -o f.out

	#$(FLAGS)
	@echo "executable2 made"

clean:
	@rm -f $(OBJS)
	@echo "Object files removed from libft. Beep-Bop"

fclean: clean
	@rm -f $(NAME) $(EXE)
	@echo "Binaries and object files gone."

eclean:
	@rm -f $(EXE)

gclean:
	@rm -f $(DUE)

re: fclean all
	@echo "All good again"
