comp := g++
flags := -Wall
src/.o := build


.PHONY:all clean

all:$(src/.o)/main.o $(src/.o)/Letters.o $(src/.o)/func.o $(src/.o)/ris.o $(src/.o)/tips_and_checking.o
		$(comp) $(src/.o)/main.o $(src/.o)/Letters.o $(src/.o)/func.o $(src/.o)/ris.o $(src/.o)/tips_and_checking.o -o bin/hag.exe
	
$(src/.o)/main.o:src/main.cpp
		$(comp) $(flags) -c src/main.cpp -o $(src/.o)/main.o

		
$(src/.o)/Letters.o:src/Letters.cpp
		$(comp) $(flags) -c src/Letters.cpp -o $(src/.o)/Letters.o
		
$(src/.o)/func.o:src/func.cpp
		$(comp) $(flags) -c src/func.cpp -o $(src/.o)/func.o
		
$(src/.o)/ris.o:src/ris.cpp
		$(comp) $(flags) -c src/ris.cpp -o $(src/.o)/ris.o
	
$(src/.o)/tips_and_checking.o:src/tips_and_checking.cpp
		$(comp) $(flags) -c src/tips_and_checking.cpp -o $(src/.o)/tips_and_checking.o
		
test:hag-test
		
hag-test: build/test/func_test.o build/src/allfunc.o build/test/main_test.o
		gcc build/test/func_test.o build/src/allfunc.o build/test/main_test.o -o bin/test.exe
build/test/func_test.o: test/func_test.c
		gcc -I thirdparty -I src -c test/func_test.c -o build/test/func_test.o
build/src/allfunc.o: test/allfunc.c
		gcc -I thirdparty -I src -std=c99 -c test/allfunc.c -o build/src/allfunc.o
build/test/main_test.o: test/main_test
		gcc -I thirdparty -I src -c test/main_test -o build/test/main_test.o
clean:
		rm -rf build/*.o bin/*.exe