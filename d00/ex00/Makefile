
SRCS_DIR			= .
SRCS_FILES			= 	\
						megaphone.cpp \

SRCS				= $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))
INCLUDES			= -I .
LIBS				= 
CXX					= c++
OPTS				= 
CXXFLAGS			= -std=c++98 -Wall -Wextra -Werror ${OPTS} $(INCLUDES)
OBJS				= $(SRCS:.cpp=.o)
NAME				= megaphone
ARGS				= Damnit " ! " "Sorry students, I thought this thing was off."
OBJ_DIR				= objs

all:				
					@$(MAKE) $(NAME)

$(NAME):			$(OBJS)
					$(CXX) $(OBJS) $(LIBS) -o $(NAME)

run:				all
					./$(NAME) $(ARGS)

clean:
					$(RM) $(OBJS)

fclean:
					$(RM) $(OBJS)
					$(RM) $(NAME)

re:					clean all

fre:				fclean all

.PHONY:				all clean fclean re fre norme bonus run
