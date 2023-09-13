all: executable execute

executable: main.o fun.o
	g++ -o Preguntas main.o fun.o

main.o:
	g++ -c main.cpp

fun.o:
	g++ -c fun.cpp

execute:
	./Preguntas