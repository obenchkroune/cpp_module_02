NAME            =   ex00

CXX             =   c++
CXXFLAGS        =   -Wall -Werror -Wextra -std=c++98 -Iinclude

SRC             =   ./src/Fixed.cpp ./src/main.cpp
OBJ             =   $(SRC:.cpp=.o)

RM              =   rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJ)