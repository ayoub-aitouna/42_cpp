SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

NAME = MyPhoneBook

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	g++ $(OBJ) $(CPPFLAGS) -o $(NAME)

clean : 
	rm $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : fclean $(NAME)
