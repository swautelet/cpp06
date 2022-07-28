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
	echo "testing with parameter 42\n" && ./$(NAME) 42; echo "testing with parameter 0\n" && ./$(NAME) 0; echo "testing with parameter 500\n" && ./$(NAME) 500;echo "testing with parameter -123\n" && ./$(NAME) -123;echo "testing without parameter\n" && ./$(NAME);echo "testing with parameter 48.56\n" && ./$(NAME) 48.56
	echo "testing with parameter nan\n" && ./$(NAME) nan
save :
	git commit -am "$(MAKECMDGOALS)"
	git push https://github.com/swautelet/cpp06.git

.phony : fclean clean re all