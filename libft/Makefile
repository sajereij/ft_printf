# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 11:48:42 by sreijola          #+#    #+#              #
#    Updated: 2020/09/03 14:59:35 by sreijola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_itoa.c ft_memdel.c ft_putendl_fd.c \
	   ft_strchr.c ft_striter.c ft_strmapi.c ft_strnstr.c \
	   ft_isalnum.c ft_memalloc.c ft_memmove.c ft_putnbr.c ft_strclr.c \
	   ft_striteri.c ft_strncat.c ft_strrchr.c ft_tolower.c ft_isalpha.c \
	   ft_memccpy.c ft_memset.c ft_putnbr_fd.c ft_strcmp.c ft_strjoin.c \
	   ft_strncmp.c ft_strsplit.c ft_toupper.c ft_isascii.c ft_memchr.c \
	   ft_putchar.c ft_putstr.c ft_strcpy.c ft_strlcat.c ft_strncpy.c \
	   ft_strstr.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_putstr_fd.c \
	   ft_strdel.c ft_strlen.c ft_strnequ.c ft_strsub.c ft_isprint.c \
	   ft_memcpy.c ft_putendl.c ft_strcat.c ft_strequ.c ft_strmap.c \
	   ft_strnew.c ft_strtrim.c ft_strdup.c ft_lstnew.c ft_lstdelone.c \
	   ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_count_words.c \
	   ft_intlen.c ft_islower.c ft_isupper.c ft_isblank.c ft_swap.c

OBJS = $(patsubst %.c, %.o, $(SRCS))

INCL = includes/

GCC = gcc

LIB = ar rc

FLAGS = -Wall -Wextra -Werror

TEST = test.out

all: $(NAME)

$(NAME):
	@$(GCC) $(SRCS) -c $(FLAGS)
	@$(LIB) $(NAME) $(OBJS)
	@echo "Libft made"

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
