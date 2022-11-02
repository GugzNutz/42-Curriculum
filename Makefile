# This is the name of my library program
LIBRARY = libft.a
# Wildcard to select all files ending with c, then replacing them with .o
# o standing for object files
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.0)
# Phony lists non-physical targets that are out of date
# Because of that they are always executed, norma all and clean
.PHONY: all clean
# All TARGET
all: $(OBJS)
CFLAGS = -Wall -Wextra -Werror

clean:
	rm -f $(OBJS)