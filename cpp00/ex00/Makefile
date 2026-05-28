FLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= megaphone
CXX		= c++

SRCS	= $(shell ls src/)
OBJS	= $(addprefix obj/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME) && echo "Compilado: $(NAME)" || (echo "Error al compilar" && exit 1)

obj/%.o: src/%.cpp
	@mkdir -p obj
	@$(CXX) $(FLAGS) -c $< -o $@

clean:
	@rm -rf obj

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
