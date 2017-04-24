CC = gcc
BUILD_F = build/
BIN_F = bin/
SRC_F = src/
TESTS_F = test/
SOURCE_O = main.o deposit.o
FLAGS = -Wall -Werror -MP -MMD

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

test: bin build tests.o
	$(CC) $(FLAGS) $(BUILD_F)tests.o  -o $(BIN_F)tests

tests.o: $(TESTS_F)main.c
	$(CC) $(FLAGS) $(TESTS_F)tests.c  -o $(BUILD_F)tests.o

bin: 
	test ! -d bin && mkdir bin
build:  
	test ! -d build && mkdir build

