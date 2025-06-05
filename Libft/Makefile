
NAME = libft.a
OBJS = $(SOURCES:.c=.o)
CC = cc
C_FLAGS = -Wall -Wextra -Werror
SRC_DIR = Libft
SOURCES = \
	ft_atoi.c \
	ft_isalpha.c \
	ft_memchr.c \
	ft_memset.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_tolower.c \
	ft_bzero.c \
	ft_isascii.c \
	ft_memcmp.c \
	ft_strchr.c \
	ft_strlcpy.c \
	ft_strrchr.c \
	ft_toupper.c \
	ft_calloc.c \
	ft_isdigit.c \
	ft_memcpy.c \
	ft_strdup.c \
	ft_strlen.c \
	ft_strtrim.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_memmove.c \
	ft_strjoin.c \
	ft_strncmp.c \
	ft_substr.c
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
