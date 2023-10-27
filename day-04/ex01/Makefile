#Name
NAME = List

#Source
SRC = main.cpp Student.cpp Person.cpp Staff.cpp Course.cpp Room.cpp \
	  StudentList.cpp StaffList.cpp CourseList.cpp RoomList.cpp

# The compiler
CC = c++

#Flags -std=c++98
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

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
