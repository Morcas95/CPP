FLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= bank
CXX		= c++
INC		= -I hpp/

SRCS	= $(shell ls src/)
OBJS	= $(addprefix obj/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME) && echo "Compilado: $(NAME)" || (echo "Error al compilar" && exit 1)

obj/%.o: src/%.cpp
	@mkdir -p obj
	@$(CXX) $(FLAGS) $(INC) -c $< -o $@

clean:
	@rm -rf obj

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
