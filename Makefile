# This is the name of my library program
LIBRARY = libft.a
# Wildcard to select all files ending with c, then replacing them with .o
# o standing for object files
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
# Phony lists non-physical targets that are out of date
# Because of that they are always executed, norma all and clean
.PHONY: all clean
# All TARGET
all: $(OBJS)
CFLAGS = -Wall -Wextra -Werror
CC = gcc
clean:
	rm -f $(OBJS)
# Do i need this fclean?
fclean: clean 
		$(OBJS)

re: fclean all