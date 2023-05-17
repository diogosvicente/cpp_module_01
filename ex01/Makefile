CC		= g++
RM		= rm -f
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

SRC		= Zombie.cpp zombieHorde.cpp main.cpp
NAME		= zombie

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

r: all
	@./zombie

.PHONY: all clean fclean re r
