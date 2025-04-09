CC = gcc
CFLAGS = -Wall -Wextra -IIncludes -g

SRC_DIR = Srcs
TEST_DIR = Test

BIN = blackjack

SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(SOURCES:.c=.o)

all: $(BIN)

$(BIN): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(SRC_DIR)/*.o $(BIN) $(TEST_DIR)/*.o test_suite

test: $(OBJECTS) $(wildcard $(TEST_DIR)/*.c)
	$(CC) $(CFLAGS) -o test_suite $(OBJECTS) $(wildcard $(TEST_DIR)/*.c)
	./test_suite

re: clean all

.PHONY: all clean test
