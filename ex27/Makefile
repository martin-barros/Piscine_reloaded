CC = cc

CFLAGS = -Wall -Wextra -Werror

CFILE = ft_display_file.c

OBJECTS = $(CFILE:%.c=%.o)

NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) -o $@ $<
	@echo "Creation was sucessful."

clean:
	@rm -rf $(OBJECTS)
	@echo "Partial cleaning was sucessful."

fclean: clean
	@rm -rf $(NAME)
	@echo "Full cleaning was sucessful."
