
SRCS_DIR			= .
SRCS_FILES			= 	\
						Contact.class.cpp \
						phonebook.cpp \
						add.cpp \

HEAD_FILES			= \
						Contact.class.hpp \
						phonebook.hpp \

SRCS				= $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))
INCLUDES			= -I .
LIBS				= 
CC					= clang++
OPTS				= 
CXXFLAGS			= -std=c++98 -Wall -Wextra -Werror ${OPTS} $(INCLUDES)
OBJS				= $(SRCS:.cpp=.o)
NAME				= phonebook
ARGS				= 
OBJ_DIR				= objs

all:				
					@$(MAKE) $(NAME)

$(NAME):			$(OBJS) ${HEAD_FILES}
					$(CC) $(OBJS) $(LIBS) -o $(NAME)

bonus:				all

run:				all
					./$(NAME) $(ARGS)

norme:
					$(LIBFT_MAKE) norme
					norminette $(SRCS)

clean:
					$(RM) $(OBJS)

fclean:
					$(RM) $(OBJS)
					$(RM) $(NAME)

re:					clean all

fre:				fclean all

.PHONY:				all clean fclean re fre norme bonus run
