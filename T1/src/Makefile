all: executable execute clean

executable: main.o lista.o
	g++ -o Preguntas main.o fun.o

main.o:
	g++ -c main.cpp

lista.o:
	g++ -c fun.cpp

execute:
	./Preguntas

clean:
	rm -f *.o Preguntas