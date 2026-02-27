# --- Executable name ---
NAME		:= clapTrap


# --- Compiler & Flags ---
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98


# --- Directories ---
SRC_DIR		:= .
OBJ_DIR		:= obj
INC_DIR		:= include


# --- Sources & Objects ---
SRCS		:= $(wildcard $(SRC_DIR)/*.cpp)
OBJS		:= $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS		:= $(OBJS:.o=.d)

CCFLAGS		+= -I$(INC_DIR)


# --- Clean command ---
RM			:= rm -rf


# --- Colors ---
RED			:= \033[31m
GREEN		:= \033[32m
YELLOW		:= \033[33m
MAGENTA		:= \033[35m
CYAN		:= \033[36m
RESET		:= \033[0m

# =============================================================================

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@echo -e "$(GREEN)Linking $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo -e "$(CYAN)Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) $(CCFLAGS) -MMD -MP -c $< -o $@

$(OBJ_DIR):
	@echo -e "$(YELLOW)Creating object directory...$(RESET)"
	@mkdir -p $(OBJ_DIR)

-include $(DEPS)

clean:
	@echo -e "$(MAGENTA)Cleaning object files...$(RESET)"
	@$(RM) $(OBJ_DIR)

fclean: clean
	@echo -e "$(RED)Cleaning executable...$(RESET)"
	@$(RM) $(NAME)

re: fclean all

t: all
	@echo -e "$(GREEN)Running $(NAME)...$(RESET)"
	@sleep 1
	@clear
	@./$(NAME)
