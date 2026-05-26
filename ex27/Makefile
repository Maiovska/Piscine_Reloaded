# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaiovsk <hmaiovsk@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/24 16:13:17 by hmaiovsk          #+#    #+#              #
#    Updated: 2026/04/24 16:13:24 by hmaiovsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ft_display_file
CC := cc
CFLAGS := -Wall -Wextra -Werror
FILES := ft_display_file.c
OBJS := $(patsubst %.c, %.o, $(FILES))

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
