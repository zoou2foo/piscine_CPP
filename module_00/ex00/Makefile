#-----------DECLARATION------------#

NAME = megaphone

SRCS = megaphone.cpp

CC = c++ -g

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -f

#-------------RECIPES--------------#

all: $(NAME)
${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____Megaphone was created with success____"

clean:
		${RM} ${NAME}
		@echo "____Exec was deleted____"

fclean: clean

re: fclean all

.PHONY: all clean fclean re