SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

NAME = EasyFind

CPPFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : fclean $(NAME)