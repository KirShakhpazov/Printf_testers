# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 10:06:49 by kshakhpa          #+#    #+#              #
#    Updated: 2024/12/20 10:11:51 by kshakhpa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra
OBJ_FILES = 	function/ft_abst.o function/ft_putnbr_fd.o function/ft_uint.o \
		function/ft_printf.o function/ft_strlen.o function/ft_substr.o \
		function/ft_putstr_fd.o function/ft_putchar_fd.o \
		function/ft_kstoa.o function/ft_toupper.o function/ft_sign.o \
		function/ft_itoa.o function/ft_strchr.o function/ft_xtoa.o \
		function/ft_caps.o function/ft_strjoin.o function/count_char.o \
		process/pf_prefix.o process/pf_toprint.o process/pf_reset.o \
		process/pf_init.o process/put_perc.o process/pf_types.o \
		process/put_hex.o process/put_ptr.o process/put_char.o \
		process/put_str.o  process/put_decm.o process/pf_flags.o \
		process/pf_postfix.o process/put_heks.o process/put_uint.o
HEADER_FILES = 	libftprintf.h
NAME = 		libftprintf.a

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar -rsc $@ $^

bonus: $(NAME)
	ar -rsc $^

%.o : %.c $(HEADER_FILES)
	$(CC) -c $(FLAGS) -o $@ $<

clean:
	rm -f $(OBJ_FILES) 
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean bonus fclean re
