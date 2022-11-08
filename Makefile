# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 14:42:52 by gfilipe-          #+#    #+#              #
#    Updated: 2022/11/08 16:11:03 by gfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This is the name of my library program
NAME := libft.a
# Wildcard to select all files ending with c, then replacing them with .o
# o standing for object files
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
# Phony lists non-physical targets that are out of date
# Because of that they are always executed, normally all and clean
.PHONY: all clean fclean
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror 
# All TARGET
.c.o: 
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME):  ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} $(OBJS)

fclean: clean 
		${RM} ${NAME}
		
re: fclean all