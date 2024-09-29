# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 20:06:36 by aursuare          #+#    #+#              #
#    Updated: 2024/09/17 20:10:41 by aursuare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

all:	$(NAME)

$(NAME):
	$(MAKE) -C .. all
	cp ../libftprintf.a $(NAME)
	gcc main.c $(NAME)

clean:
	$(MAKE) -C .. clean

fclean: clean
	rm -rf a.out $(NAME)

re: fclean
	$(MAKE) all
