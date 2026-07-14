FLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= MoarBrainz
CXX		= c++
INC		= -I hpp/

SRCS	= $(shell ls src/)
OBJS	= $(addprefix obj/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) $(OBJS) -o $(NAME) && printf "\033[35mCompilado: \033[32m%s\033[0m\n" "$(NAME)" || (printf "\033[31mError al compilar\033[0m\n" && exit 1)

obj/%.o: src/%.cpp
	@mkdir -p obj
	@$(CXX) $(FLAGS) $(INC) -c $< -o $@

clean:
	@rm -rf obj

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
