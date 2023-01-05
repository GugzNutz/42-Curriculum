# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 14:42:52 by gfilipe-          #+#    #+#              #
#    Updated: 2023/01/05 10:56:15 by gfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This is the name of my library program
# = stands for simply expanded, doesn't grow
# Using -f 'name' or --file='name' makes 'make' read the filename as the makefile
NAME = libft.a
# Wildcard to select all files ending with c, then replacing them with .o
# o standing for object files
SRC := ft_tolower.c ft_toupper.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcmp.c ft_bzero.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c\
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_atoi.c ft_strncmp.c ft_strchr.c ft_strdup.c ft_strnstr.c ft_strrchr.c ft_calloc.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
# = Stands for recursively expanded variable, keeps on adding until it finishes
OBJS = $(SRC:.c=.o)
BNS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS = $(BNS:.c=.o)

CC = cc
RM = rm -f
AR = ar rcs
FLAGS = -Wall -Wextra -Werror 
# All TARGET
all: ${NAME}
# https://earthly.dev/blog/using-makefile-wildcards/
# rm -f *.o remove all files that end with .o
.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}
	
$(NAME):  ${OBJS}
	${AR} ${NAME} ${OBJS}

bonus: ${OBJS} ${BONUS}
		${AR} ${NAME} ${OBJS} ${BONUS}

clean:
	${RM} $(OBJS) $(BONUS)

fclean: clean 
		${RM} ${NAME} 
		
re: fclean ${NAME}
# Phony lists non-physical targets that are out of date
# Because of that they are always executed, normally all and clean
.PHONY: all clean fclean re bonus