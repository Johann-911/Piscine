# Compiler
CC = cc

# Compilation Flags
CFLAGS = -Wall -Wextra -Werror

# Executable Name
NAME = rush-02

# Source Files
SRCS = main.c ft_atoi.c ft_strcmp.c ft_strdup.c ft_strlen.c read_file.c parse_dict.c print_number.c print_large_number.c

# Object Files
OBJS = $(SRCS:.c=.o)

# Rule to Compile Everything
make: fclean all

# Rule to Compile the Executable
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Rule to Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to Clean Compiled Files
fclean:
	rm -f $(OBJS) $(NAME)