NAME = game

SRC = main.cpp t_list.cpp AMateria.cpp Ice.cpp Cure.cpp MateriaSource.cpp Character.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS =

CC = c++

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean : rm -rf $(OBJ)

fclean :  clean
	rm -rf $(NAME)