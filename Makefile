# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 11:48:42 by sreijola          #+#    #+#              #
#    Updated: 2020/07/04 00:38:00 by sreijola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

EXE = x.out

DUE = b.out

SRCS = ft_itoa_base.c type.c ft_printf.c ft_lllen.c ft_ltoa_base.c ft_putstr_ret.c \
	adapter.c ft_strndup.c signer.c

OBJS = $(patsubst %.c, %.o, $(SRCS))

LIB = libft/libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make -C libft
	@gcc $(SRCS) -c $(FLAGS)
	@ar rc $(NAME) $(OBJS)

ex: $(EXE)

$(EXE):
	#@make -C libft
	@gcc main.c $(SRCS) $(LIB) -o $(EXE) 
	#$(FLAGS) 
	@echo "executable made"

du: $(DUE)

$(DUE):
	#@make -C libft

	# @gcc main.c $(SRCS) $(LIB) -o q.out
	# @gcc main_basics.c $(SRCS) $(LIB) -o a.out
	# @gcc main2.c $(SRCS) $(LIB) -o $(DUE)
	# @gcc main3.c $(SRCS) $(LIB) -o c.out

	# ignored all; @gcc main_zerowp.c $(SRCS) $(LIB) -o z.out
	# @gcc main_tagwp.c $(SRCS) $(LIB) -o t.out
	# @gcc main_spacewp.c $(SRCS) $(LIB) -o s.out
	# @gcc main_pluswp.c $(SRCS) $(LIB) -o p.out
	@gcc main_minuswp.c $(SRCS) $(LIB) -o m.out

	@gcc main_multfwp.c $(SRCS) $(LIB) -o fwp.out
	@gcc main_multfw.c $(SRCS) $(LIB) -o fw.out
	@gcc main_jumbo.c $(SRCS) $(LIB) -o j.out 
	# @gcc main_lenmultfw.c $(SRCS) $(LIB) -o l.out
	@gcc main_neg.c $(SRCS) $(LIB) -o neg.out

	#$(FLAGS) 
	@echo "executable2 made"

clean:
	@make -C libft clean
	@rm -f $(OBJS)
	@echo "Object files removed from libft. Beep-Bop"

fclean: clean
	@make -C libft fclean
	@rm -f $(NAME) $(EXE)
	@echo "Binaries and object files gone." 

eclean: 
	@rm -f $(EXE)

gclean: 
	@rm -f $(DUE) a.out j.out

re: fclean all
	@echo "All good again"


