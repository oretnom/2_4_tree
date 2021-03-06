all: main

main: tree.o main.o
	g++ -Wall -pedantic tree.o main.o -o main

tree.o: tree.cpp
	g++ -Wall -pedantic -c tree.cpp

main.o: main.cpp
	g++ -Wall -pedantic -c main.cpp

clean:
	rm -rf *.o *.h.gch main
