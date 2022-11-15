# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 14:42:52 by gfilipe-          #+#    #+#              #
#    Updated: 2022/11/15 17:35:30 by gfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This is the name of my library program
# = stands for simply expanded, doesn't grow
# Using -f 'name' or --file='name' makes 'make' read the filename as the makefile
NAME = libft.a
# Wildcard to select all files ending with c, then replacing them with .o
# o standing for object files
SRC := $(wildcard *.c)
SRC := $(filter-out ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c, $(SRC))
# = Stands for recursively expanded variable, keeps on adding until it finishes
OBJS = $(SRC:.c=.o)
BNS = ft_lstnew.c \
ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS = $(BNS:.c=.o)

CC = gcc
RM = rm -f
AR = ar rcs
FLAGS = -Wall -Wextra -Werror 
# All TARGET
all: ${NAME}
# https://earthly.dev/blog/using-makefile-wildcards/
# rm -f *.o remove all files that end with .o
# .c.o:
# ${CC} ${FLAGS} -c $< -o ${<:.c=.o}
$(NAME):  ${OBJS}
	${AR} ${NAME} ${OBJS}

bonus: ${OBJS} ${BONUS}
		${AR} ${NAME} ${OBJS} ${BONUS}

clean:
	${RM} $(OBJS) $(BONUS)

fclean: clean 
		${RM} ${NAME}
		
re: clean all
# Phony lists non-physical targets that are out of date
# Because of that they are always executed, normally all and clean
.PHONY: all clean fclean re bonus