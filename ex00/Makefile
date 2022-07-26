SRC =  main.cpp
NAME = math
CPPFLAGS = -Werror -Wextra -Wall -std=c++98
OBJ=$(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

.o:.cpp
	c++ -c $(CPPFLAGS) $? 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

test : $(NAME)
	./$(NAME) 42 && ./$(NAME) 0 && ./$(NAME) 500 && ./$(NAME) -123

save :
	git commit -am "$(MAKECMDGOALS)"
	git push https://github.com/swautelet/cpp06.git

.phony : fclean clean re all