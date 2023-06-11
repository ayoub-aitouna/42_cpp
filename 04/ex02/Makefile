SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

NAME = Animals

CPPFLAGS = -Wall -Wextra -Werror -std=c++98  -fsanitize=address

all : $(NAME)

$(NAME) : $(OBJ)
	g++ $(OBJ) $(CPPFLAGS) -o $(NAME)

clean :
	rm $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : fclean $(NAME)