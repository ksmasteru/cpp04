NAME = game

SRC = main.cpp ICharater.cpp

OBJ = $(SRC.cpp:=.o)

FLAGS = -Wall -Werror -Wextra

$CC = c++

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean : rm -rf $(OBJ)

fclean :  clean
	rm -rf $(NAME)
