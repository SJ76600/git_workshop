CC = gcc
CFLAGS = -Wall -Wextra -IIncludes -g

SRC_DIR = Srcs
TEST_DIR = Test

BIN = blackjack

SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(SOURCES:.c=.o)

MAIN_OBJ = $(SRC_DIR)/main.o
TEST_OBJECTS = $(filter-out $(MAIN_OBJ), $(OBJECTS))

all: $(BIN)

$(BIN): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(SRC_DIR)/*.o $(BIN) $(TEST_DIR)/*.o test_suite_* *.o

re: clean all

test: test_game test_deck

test_game: $(TEST_OBJECTS) $(TEST_DIR)/test_game.c
	$(CC) $(CFLAGS) -o test_suite_game $(TEST_OBJECTS) $(TEST_DIR)/test_game.c
	./test_suite_game

test_deck: $(TEST_OBJECTS) $(TEST_DIR)/test_deck.c
	$(CC) $(CFLAGS) -o test_suite_deck $(TEST_OBJECTS) $(TEST_DIR)/test_deck.c
	./test_suite_deck

.PHONY: all clean re test test_game test_deck
