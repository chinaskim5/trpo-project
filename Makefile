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
		
clean:
		rm -rf build/*.o bin/*.exe