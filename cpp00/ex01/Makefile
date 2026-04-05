FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
CXX = c++

SRCS = 	main.cpp \
		PhoneBook.cpp \
		Contact.cpp

OBJS = 	main.o \
		PhoneBook.o\
		Contact.o

HDS = 	PhoneBook.hpp \
		Contact.hpp

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