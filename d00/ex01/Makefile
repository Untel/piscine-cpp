
SRCS_DIR			= .
SRCS_FILES			= 	\
						Contact.class.cpp \
						phonebook.cpp \

HEAD_FILES			= \
						Contact.class.hpp \
						phonebook.hpp \

SRCS				= $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))
INCLUDES			= -I .
LIBS				= 
CXX					= c++
OPTS				= 
CXXFLAGS			= -std=c++98 -Wall -Wextra -Werror ${OPTS} $(INCLUDES)
OBJS				= $(SRCS:.cpp=.o)
NAME				= phonebook
ARGS				= 
OBJ_DIR				= objs
DEP 				= $(OBJS:.o=.d)

all:				
					@$(MAKE) $(NAME)

$(NAME):			$(OBJS) ${HEAD_FILES}
					$(CXX) $(CXXFLAGS) $(OBJS) $(LIBS) -o $(NAME)

-include $(DEP)

run:				all
					./$(NAME) $(ARGS)

test:				
					@$(MAKE) OPTS="-D AUTOFILL_CONTACTS" re
					./$(NAME) $(ARGS)

clean:
					$(RM) $(OBJS)

fclean:
					$(RM) $(OBJS)
					$(RM) $(NAME)

re:					clean all

fre:				fclean all

.PHONY:				all clean fclean re fre norme bonus run
