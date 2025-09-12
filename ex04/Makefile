NAME = ex04
TESTNAME = ex04tests

CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

FILENAMES = main ReplaceWord
SOURCES = $(addsuffix .cpp, $(FILENAMES))
OBJECTS = $(addsuffix .o, $(FILENAMES))

TEST_FILENAMES = testReplaceWord
TEST_SOURCES = $(addsuffix .cpp, $(TEST_FILENAMES))
TEST_OBJECTS = $(addsuffix .o, $(TEST_FILENAMES))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CPP) $(CPP_FLAGS) $(OBJECTS) -o $(NAME)

test: $(TESTNAME)

$(TESTNAME): $(TEST_OBJECTS)
	$(CPP) $(CPP_FLAGS) $(TEST_OBJECTS) -o $(TESTNAME)

%.o: %.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	rm -f $(TEST_OBJECTS)

fclean: clean
	rm -f $(NAME)
	rm -f $(TESTNAME)

re: fclean all

.PHONY: all clean fclean re test
