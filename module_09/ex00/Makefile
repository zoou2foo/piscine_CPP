#------------------------------------------------------------------------------#
#                                   COLOURS                                    #
#------------------------------------------------------------------------------#

DEF_COLOR = \033[0;39m
NC		= \e[0;39m
MAGENTA	= \033[0;95m
LMAGENTA = \e[95m
RED		= \033[0;91m
LRED	= \e[91m
YELLOW	= \033[0;93m
LYELLOW	= \e[93
GREEN	= \033[0;92m
LGREEN	= \e[92m
CYAN	= \033[0;96m
LCYAN	= \e[96m
BLUE	= \033[0;94m
GRAY	= \033[0;90m
WHITE	= \033[0;97m
#------------------------------------------------------------------------------#
#                                   GENERICS                                   #
#------------------------------------------------------------------------------#

# Special variables
DEFAULT_GOAL: all
.DELETE_ON_ERROR: $(NAME)
.PHONY: all bonus clean fclean re run leaks ldirs

#------------------------------------------------------------------------------#
#                                    FLAGS                                     #
#------------------------------------------------------------------------------#

# Hide calls
export VERBOSE = FALSE
ifeq ($(VERBOSE),TRUE)
	HIDE =
else
	HIDE = @
endif

# Debug mode
export DEBUG = TRUE
ifeq ($(DEBUG),TRUE)
	MODE = -g
else
	MODE =
endif

# Start screen mode
export GRAPHIC = FALSE
ifeq ($(GRAPHIC),TRUE)
	START = bash pew_pew2.sh
else
	START =
endif

#------------------------------------------------------------------------------#
#                                  VARIABLES                                   #
#------------------------------------------------------------------------------#

# Compiler and flags
CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM		=	rm -rf
MD		=	mkdir -p
#INCLUDE =	-I include

# Program and directory names
NAME	=	btc
SRCDIR	=	src/
OBJDIR	=	bin/
#TSTDIR	=	tests/

# File names
FILES	= BitcoinExchange \
		  main \


SRCS	=	$(addprefix $(SRCDIR), $(addsuffix .cpp $(FILES)))
OBJS	=	$(addprefix $(OBJDIR), $(addsuffix .o, $(FILES)))


CMD		=	./btc

#------------------------------------------------------------------------------#
#                                   TARGETS                                    #
#------------------------------------------------------------------------------#

all: ldirs $(NAME)

# Creates the object directories
ldirs:
	$(HIDE) $(MD) $(OBJDIR)
	$(HIDE) $(MD) $(OBJDIR)

$(NAME): $(OBJS)
	$(HIDE) $(START)
#	$(HIDE) cd libft && make && cd ..
	$(HIDE) $(CC) $(MODE) $(CFLAGS) -o $@ $^
	@echo "$(GREEN)Files compiled$(DEF_COLOR)"

$(OBJS): $(OBJDIR)%.o : $(SRCDIR)%.cpp
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	$(HIDE) $(CC) $(MODE) $(CFLAGS) -c $< -o $@

# Removes objects
clean:
	$(HIDE) $(RM) $(OBJS)
#	$(HIDE) cd libft && make clean && cd ..
	@echo "$(MAGENTA)Object files cleaned$(DEF_COLOR)"

# Removes object dir and executable
fclean: clean
	$(HIDE) $(RM) $(OBJDIR)
	@echo "$(MAGENTA)Object directory cleaned$(DEF_COLOR)"
	$(HIDE) $(RM) $(NAME)
	@echo "$(RED)Executable cleaned$(DEF_COLOR)"

# Removes object dir and executable and remakes everything
re: fclean all
	@echo "$(CYAN)Cleaned and rebuilt everything!$(DEF_COLOR)"

# Display start scrren
pewpew:
	$(HIDE) bash pew_pew2.sh

# Runs the program
run: re
	$(HIDE) $(CMD)

# Runs the program with valgrind
leaks: all
	@echo "$(RED)Checking leaks...$(DEF_COLOR)"
	$(HIDE) valgrind --leak-check=full --show-leak-kinds=all -s $(CMD)