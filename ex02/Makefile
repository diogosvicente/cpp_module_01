CC		= g++
RM		= rm -f
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= main.cpp
NAME		= hi_this_is_brain

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
	@./hi_this_is_brain

.PHONY: all clean fclean re r
