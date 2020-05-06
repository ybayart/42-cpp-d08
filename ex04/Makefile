SRC			=	main \
				Calculator \
				Token \
				Token_Nb \
				Token_Op \
				Token_Par

SRCS		= $(addprefix srcs/, $(addsuffix .cpp, ${SRC}))

OBJS		= ${SRCS:.cpp=.o}

NAME		= Calculator

CC			= clang++
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -std=c++98 -I./includes

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
