all: executable execute

executable: main.o boats.o
	g++ -o Buques main.o boats.o

main.o:
	g++ -c main.cpp

boats.o:
	g++ -c boats.cpp

execute:
	./Buques