CC = gcc
BUILD_F = build/
BIN_F = bin/
SRC_F = src/
SOURCES_O = main.o deposit.o
KEYS = -Wall -Werror

all:  deposit

deposit: $(SOURCES_O)
	$(CC) $(KEYS) $(BUILD_F)main.o $(BUILD_F)deposit.o -o $(BIN_F)deposit
main.o : $(SRC_F)main.c
	$(CC) $(KEYS) -c $(SRC_F)main.c -o $(BUILD_F)main.o
deposit.o : $(SRC_F)deposit.c
	$(CC) $(KEYS) -c $(SRC_F)deposit.c -o $(BUILD_F)deposit.o
clean:
	rm -rf $(BIN_F)*
	rm -rf $(BUILD_F)*
