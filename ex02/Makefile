NAME = a.out

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJS = $(addprefix objs/, $(SRCS:.cpp=.o))

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

ifeq ($(MAKECMDGOALS), debug)
	CXXFLAGS += -g -fsanitize=address -Wconversion -Wshadow -Wno-shadow -Wno-sign-conversion
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

objs/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf objs

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: re

.PHONY: all clean fclean re

