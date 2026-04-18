FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = bank
CXX = c++

SRCS = 	Account.cpp tests.cpp

OBJS = 	Account.o tests.o

HDS = 	Account.hpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HDS)
	@$(CXX) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all