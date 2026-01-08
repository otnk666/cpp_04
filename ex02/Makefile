
NAME		= ex02

CXX			= c++
CXXFLAGS 	= -Wall -Werror -Wextra
CXXFLAGS	+= -std=c++98 -pedantic

RM = rm -rf
SRCS_DIR = ./srcs
INC_DIR = ./includes

SRCS = $(shell find $(SRCS_DIR) -name "*.cpp")

OBJS = $(SRCS:.cpp=.o)

INCLUDES = -I $(INC_DIR)


all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) $(INCLUDES) -o $(NAME)

%.o: %.cpp
		$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY	: all clean fclean re