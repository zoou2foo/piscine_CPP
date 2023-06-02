#-----------DECLARATION------------#

NAME = phonebook

SRCS = PhoneBook.cpp \
	   PhoneBook.hpp \
	   Contact.cpp \
	   Contact.hpp \
	   main.cpp \

CC = c++ -g

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -f

#-------------RECIPES--------------#

all: $(NAME)
${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____PhoneBook was created with success____"

clean:
		${RM} ${NAME}
		@echo "____Exec was deleted____"

fclean: clean

re: fclean all

.PHONY: all clean fclean re