NAME = account
CC = c++
CFLAGS = -Wall

SRCS = tests.cpp Account.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = Account.hpp

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
