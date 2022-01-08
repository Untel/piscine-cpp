
SRCS_DIR			= .
SRCS_FILES			= 	\
						main.cpp \
						Character.cpp \
						AMateria.cpp \
						Cure.cpp \
						Ice.cpp \
						MateriaSource.cpp \


HEAD_FILES			= \
						Character.hpp \
						ICharacter.hpp \
						IMateriaSource.hpp \
						MateriaSource.hpp \
						AMateria.hpp \
						Cure.hpp \
						Ice.hpp \

SRCS				= $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))
INCLUDES			= -I .
LIBS				= 
CXX					= c++
OPTS				=
CXXFLAGS			= -std=c++98 -Wall -Wextra -Werror ${OPTS} $(INCLUDES) -MMD
OBJS				= $(SRCS:.cpp=.o)
NAME				= materia
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

debug:				all
					./$(NAME) $(ARGS)


clean:
					$(RM) $(OBJS)
					$(RM) $(DEPS)

fclean:				clean
					$(RM) $(NAME)

re:					clean all

fre:				fclean all

.PHONY:				all clean fclean re fre run
