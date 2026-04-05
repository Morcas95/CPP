FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone
CXX = c++
SRCS = megaphone.cpp
OBJS = megaphone.o

all: $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	@$(CXX) $(FLAGS) -c $(SRCS) -o $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all