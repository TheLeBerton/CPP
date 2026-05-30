NAME =		megaphone
CC =		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98
SRCS =		megaphone.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

test: all
	@printf "\n- subject test 1\n"
	./$(NAME) "shhhhh.. I think the students are asleep..."
	@printf "\n- subject test 2\n"
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@printf "\n- subject test 3\n"
	./$(NAME)
	@printf "\n- Testing with one argument\n"
	./$(NAME) "Test number 2"
	@printf "\n- Testing with multiple arguments\n"
	./$(NAME) "Test " number " THREE you see ?"
	@printf "\n"

.PHONY: all clean fclean re test
