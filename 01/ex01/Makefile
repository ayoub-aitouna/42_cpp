SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

NAME = Moar_brainz

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	g++ $(OBJ) -o $(NAME)

clean : 
	rm $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : fclean $(NAME)
