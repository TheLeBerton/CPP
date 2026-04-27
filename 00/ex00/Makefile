NAME =		megaphone
CC =		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98
SRCS =		megaphone.cpp

all: $(NAME)


$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	@echo -e "\nTesting without arguments"
	./$(NAME)
	@echo -e "\nTesting with one argument"
	./$(NAME) "Test number 2"
	@echo -e "\nTesting with multiple arguments"
	./$(NAME) "Test " number " THREE you see ?"
	@echo

