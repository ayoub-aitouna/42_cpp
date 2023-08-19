SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

NAME = Iter

CPPFLAGS =-Wall -Wextra -Werror -std=c++98 

CC = g++-11

all : $(NAME)

%.o : %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : fclean $(NAME)