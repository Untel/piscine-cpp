
SRCS_DIR			= .
SRCS_FILES			= 	\
						Account.class.cpp \
						tests.cpp \

HEAD_FILES			= \
						Account.class.hpp \

SRCS				= $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))
INCLUDES			= -I .
LIBS				= 
CXX					= c++
OPTS				=
CXXFLAGS			= -std=c++98 -Wall -Wextra -Werror ${OPTS} $(INCLUDES) -MMD
OBJS				= $(SRCS:.cpp=.o)
NAME				= GlobalBanksters
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
					@$(MAKE) OPTS="-D DEBUG" re
					./$(NAME) $(ARGS) > cmp
					diff 19920104_091532.log cmp
					rm -f ./a.out ./cmp

clean:
					$(RM) $(OBJS)

fclean:
					$(RM) $(OBJS)
					$(RM) $(NAME)

re:					clean all

fre:				fclean all

.PHONY:				all clean fclean re fre norme bonus run
