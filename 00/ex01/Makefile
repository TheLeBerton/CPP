NAME =		mbappe
CC =		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98
SRCS =		mbappe.cpp team.cpp main.cpp

all: $(NAME)


$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
