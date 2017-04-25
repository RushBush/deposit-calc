CC = gcc
BUILD_F = build/
BIN_F = bin/
SRC_F = src/
TESTS_F = test/
SOURCE_O = main.o deposit.o
FLAGS = -Wall -Werror -MP -MMD

.PHONY: all clean
	
all : deposit testing
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
	mkdir $(BUILD_F)src
rmDir: 
	rm -r $(BIN_F)
	rm -r $(BUILD_F)

testing: deposit_test.o validation_test.o main1.o
	$(CC) build/src/deposit_test.o build/src/validation_test.o build/src/main.o -o bin/tests

deposit_test.o: test/deposit_test.c
	$(CC) $(FLAGS) -c test/deposit_test.c -o build/src/deposit_test.o 

validation_test.o: test/validation_test.c
	$(CC) $(FLAGS) -c test/validation_test.c -o build/src/validation_test.o

main1.o: test/main.c
	$(CC) $(FLAGS) -c test/main.c -o build/src/main.o



