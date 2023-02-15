# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 12:07:22 by chillion          #+#    #+#              #
#    Updated: 2023/02/15 13:50:53 by mgruson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all norm clean fclean re

CC := c++
FLAGS := -std=c++98 -g3 -Wall -Wextra -Werror -MMD -MP -I src/ 
#FLAGS += -fsanitize=address
SRC_DIR := src/
OBJ_DIR := obj/
RM := rm
VAL := valgrind --leak-check=full --track-origins=yes

SRCS =	main.cpp Fixed.cpp

SOFT_NAME := Premiers_pas_vers_une_classe_utile

OBJS = $(SRCS:%.cpp=%.o)
SRC = $(addprefix $(SRC_DIR),$(SRCS))
OBJ = $(addprefix $(OBJ_DIR),$(OBJS))
DEP = $(OBJ:%.o=%.d)
OBJF := ${OBJ_DIR}.cache_exists

all : ${SOFT_NAME}

${OBJ_DIR}%.o : $(SRC_DIR)%.cpp $(OBJF) Makefile
	${CC} ${FLAGS} -c $< -o $@

$(OBJF) :
	@mkdir -p ${OBJ_DIR}
	@touch ${OBJF}

${SOFT_NAME} : ${OBJ}
	${CC} ${OBJ} ${FLAGS} -o ${SOFT_NAME}

-include ${DEP}

clean : 
	${RM} -rf ${OBJ_DIR} ${OBJF}

fclean : clean
	${RM} -f ${SOFT_NAME}

re : fclean all