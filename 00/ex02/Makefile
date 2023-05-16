SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

NAME = MyBank

all : $(NAME)

$(NAME) : $(OBJ)
	g++ $(OBJ) -o $(NAME)

clean : 
	rm $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : fclean $(NAME)
