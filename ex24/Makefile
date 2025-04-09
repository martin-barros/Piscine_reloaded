CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ./srcs

INCLUDE = ./includes

CFUNCTIONS = $(shell find $(SOURCES) -name '*.c')

OBJECTS = $(CFUNCTIONS:%.c=%.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $<

clean: 
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
