CC = gcc
BUILD_F = build/
BIN_F = bin/
SRC_F = src/
SOURCE_O = main.o deposit.o
FLAGS = -Wall -Werror

.PHONY: all clean
	
all : deposit

deposit:	mkDir $(SOURCE_O)
	$(CC) $(BUILD_F)deposit.o $(BUILD_F)main.o -o $(BIN_F)deposit-calc

deposit.o:	src/deposit.c
	$(CC) $(FLAGS) -c $(SRC_F)deposit.c -o $(BUILD_F)deposit.o

main.o:	$(SRC_F)main.c
	$(CC) $(FLAGS) -c $(SRC_F)main.c -o $(BUILD_F)main.o

clean:
	rm -rf $(BUILD_F)
	rm -rf $(BIN_F)

mkDir:
	mkdir $(BIN_F)
	mkdir $(BUILD_F)

rmDir: 
	rm -r $(BIN_F)
	rm -r $(BUILD_F)

