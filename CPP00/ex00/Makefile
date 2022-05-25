# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 15:36:31 by ddordain          #+#    #+#              #
#    Updated: 2022/05/25 15:41:39 by ddordain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		megaphone

SRCS	=	megaphone.cpp

OBJS	= $(SRCS:%.cpp=$(BIN)/%.o)

DEP = $(OBJS:%.o=%.d)

BIN		= ./bin

CXX	= c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

RM = rm -f

all: $(NAME)

$(NAME):	$(OBJS)
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $^ -o $@

-include $(DEP)
	
$(BIN)/%.o:		%.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -MMD -o $@ -c $<

clean:
	$(RM) $(BIN)/$(OBJS)

fclean:	clean
	$(RM) $(NAME)
	rm -r $(BIN)

re:	fclean $(NAME)

.PHONY: all clean fclean re