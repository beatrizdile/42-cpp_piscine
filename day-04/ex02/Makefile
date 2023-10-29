#Name
NAME = Form

#Source
SRC = main.cpp Form.cpp CourseFinished.cpp Headmaster.cpp NeedCourseCreation.cpp  NeedMoreClassRoom.cpp Secretary.cpp Staff.cpp SubscriptionToCourse.cpp Person.cpp Room.cpp

# The compiler
CC = c++

#Flags -std=c++98
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++11

#RM
RM=rm

#RM Force
RMF=rm -f


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:
	$(RMF) $(NAME)

re: fclean all

.PHONY: all clean fclean re
