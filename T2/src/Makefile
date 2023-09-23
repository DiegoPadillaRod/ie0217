all: executable execute 

executable: main.o angulo.o
	g++ -o Buques.exe .\angulo.o .\main.o

main.o:
	g++ -c main.cpp

angulo.o:
	g++ -c angulo.cpp

execute:
	.\Buques.exe
