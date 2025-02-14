NAME = animal

SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf  $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all