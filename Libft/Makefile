
NAME = libft.a
OBJS = $(SOURCES:.c=.o)
CC = cc
C_FLAGS = -Wall -Wextra -Werror
SRC_DIR = Libft
SOURCES = $(wildcard ft_*.c)
HEADER = libft.h

NAME:
	@echo "$(NAME)"

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	@echo "$(NAME) created."
	
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	$(CC) $(C_FLAGS) -c $< -o $@ -I$(SRC_DIR)
	
clean: 
	rm -f $(OBJS)
	@echo "Temp files removed"

fclean : clean
	rm -f $(NAME)
	@echo "Temp files and binaries removed."
	
re: fclean all
