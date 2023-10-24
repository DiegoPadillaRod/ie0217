# Makefile para compilar un programa C+* con múltiples archivos y clases
# Nombre del programa de salida
TARGET = Buques.exe

# Objetivo predeterminado
all: $(TARGET) execute

# Compilador de C++
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = main.cpp Angulo.cpp NumeroDeSerie.cpp Barco.cpp Flota.cpp

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS= $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos fuente en archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto
$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)
execute:
	./$(TARGET)
# Regla para limpiar los archivos generados
.PHONY: clean
clean:
	del $(TARGET) $(OBJECTS)

