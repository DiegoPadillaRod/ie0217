# Makefile para compilar un programa C++ 
# Nombre del programa de salida
TARGET = Notas.exe

# Objetivo predeterminado
all: $(TARGET) execute clean

# Comandos para generar el commit 
commit: gitadd gitcommit gitpush

gitadd:
	git add .

gitcommit:
	git commit -s -m "Commit desde Makefile"

gitpush:
	git push

# Compilador de C++
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = main.cpp estudiante.cpp

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


