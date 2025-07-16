NAME = megaphone
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCDIR = .
SOURCES = megaphone.cpp
OBJECTS = $(SOURCES:.cpp=.o)

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m
WHITE = \033[0;37m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "$(CYAN)Linking $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)
	@echo "$(GREEN)✓ $(NAME) created successfully!$(RESET)"

%.o: %.cpp
	@echo "$(YELLOW)Compiling $<...$(RESET)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Cleaning object files...$(RESET)"
	@rm -f $(OBJECTS)
	@echo "$(GREEN)✓ Object files cleaned!$(RESET)"

fclean: clean
	@echo "$(RED)Removing $(NAME)...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)✓ $(NAME) removed!$(RESET)"

re: fclean all

test: $(NAME)
	@echo "$(MAGENTA)Running test cases...$(RESET)"
	@echo "$(CYAN)Test 1: With arguments$(RESET)"
	@./$(NAME) "shhhhh... I think the students are asleep..."
	@echo "$(CYAN)Test 2: Multiple arguments$(RESET)"
	@./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@echo "$(CYAN)Test 3: No arguments$(RESET)"
	@./$(NAME)

.PHONY: all clean fclean re test
