all: executable execute 

executable: main.o Angulo.o NumeroDeSerie.o Barco.o Flota.o 
	g++ -o Buques.exe .\Angulo.o .\NumeroDeSerie.o .\Barco.o .\Flota.o .\main.o

main.o:
	g++ -c main.cpp

Angulo.o:
	g++ -c Angulo.cpp

NumeroDeSerie.o:
	g++ -c NumeroDeSerie.cpp

Barco.o:
	g++ -c Barco.cpp

Flota.o:
	g++ -c Flota.cpp

execute:
	.\Buques.exe
