
SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

NAME = Bureaucrat

CC = g++-11

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm $(OBJ)

fclean :
	rm -rf $(OBJ) $(NAME)

re : fclean $(NAME)