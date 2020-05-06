SRC			=	main \
				Mindopen \
				Instruction_IncP \
				Instruction_DecP \
				Instruction_IncV \
				Instruction_DecV \
				Instruction_Put \
				Instruction_Get \
				Instruction_Jump \
				Instruction_Goto

SRCS		= $(addprefix srcs/, $(addsuffix .cpp, ${SRC}))

OBJS		= ${SRCS:.cpp=.o}

NAME		= Mindopen

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
