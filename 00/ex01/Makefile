NAME := phonebook
CC := c++
CFLAGS := -Wall -Wextra -Werror

SRCS := main.cpp Contact.cpp PhoneBook.cpp Program.cpp

OBJS := $(SRCS:.cpp=.o)

HEADERS := Contact.hpp PhoneBook.hpp Program.hpp

TEST_DIR := tests
TEST_INPUT := $(TEST_DIR)/input
TEST_CAUGHT := $(TEST_DIR)/caught
TEST_EXPECTED := $(TEST_DIR)/expected
TEST_INPUTS := $(wildcard $(TEST_INPUT)/*.input)

RM := rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) -r "$(TEST_DIR)/caught"

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: re
	@echo
	@mkdir -p $(TEST_CAUGHT)
	@pass=0; fail=0; \
		for input in $(TEST_INPUTS); do \
		name=$$(basename $$input .input); \
		printf "%-35s " "TEST    $$name"; \
		./$(NAME) < $$input > $(TEST_CAUGHT)/$$name.caught; \
		if diff $(TEST_CAUGHT)/$$name.caught $(TEST_EXPECTED)/$$name.expected > /dev/null; then \
			echo "[OK]"; pass=$$((pass+1)); \
		else \
			echo "[KO]"; fail=$$((fail+1)); \
		fi; \
	done; \
	echo; echo "Passed: $$pass, Failed: $$fail"


.PHONY: all $(NAME) clean fclean re test
