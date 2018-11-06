# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/26 14:18:12 by mkopiika          #+#    #+#              #
#    Updated: 2018/10/29 20:22:39 by mkopiika         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -o
NAME = ft_display_file
SRC = ft_display_file.c

all: $(NAME)

$(NAME): 
	gcc $(CFLAGS) $(NAME) $(SRC)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
