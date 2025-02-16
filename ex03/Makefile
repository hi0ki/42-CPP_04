C++ = c++ -Wall -Wextra -Werror

SRC = main.cpp AMateria.cpp ICharacter.cpp Ice.cpp Cure.cpp

NAME = program

OBJ = $(SRC:.cpp=.o)

HEADERS = AMateria.hpp ICharacter.hpp Ice.hpp Cure.hpp

ALL: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(C++) $(OBJ) -o $(NAME)

%.o:%.cpp $(HEADERS)
	$(C++) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)