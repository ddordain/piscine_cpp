# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 15:36:31 by ddordain          #+#    #+#              #
#    Updated: 2022/06/21 17:24:22 by ddordain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out

SRCS	=	main.cpp \
			Convert.cpp \

OBJS	= $(SRCS:%.cpp=$(OBJ)/%.o)

DEP = $(OBJS:%.o=%.d)

OBJ		= ./obj

CXX	= c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

RM = rm -f
 
all: $(NAME)

$(NAME):	$(OBJS)
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $^ -o $@

-include $(DEP)
	
$(OBJ)/%.o:		%.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)/$(OBJS)

fclean:	clean
	$(RM) $(NAME)
	rm -r $(OBJ)

re:	fclean $(NAME)

.PHONY: all clean fclean re