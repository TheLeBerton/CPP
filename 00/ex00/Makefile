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

test: all
	@echo -e "\n- subject test 1"
	./$(NAME) "shhhhh.. I think the students are asleep..."
	@echo -e "\n- subject test 2"
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@echo -e "\n- subject test 3"
	./$(NAME)
	@echo -e "\n- Testing with one argument"
	./$(NAME) "Test number 2"
	@echo -e "\n- Testing with multiple arguments"
	./$(NAME) "Test " number " THREE you see ?"
	@echo

.PHONY: all $(NAME) clean fclean re test
