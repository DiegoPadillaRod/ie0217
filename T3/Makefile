# Makefile para compilar un programa C++ con múltiples archivos y clases
# Nombre del programa de salida
TARGET = Palabras.exe

# Objetivo predeterminado
all: $(TARGET) execute clean


sinpalabras.txt:
	touch sinpalabras.txt
	echo "??..," >> sinpalabras.txt

sincontenido.txt: 
	touch sincontenido.txt

solucion.txt:
	cat <<'EOF' > solucion.txt
	diego@gmail.com\n
	diego1@gmail.com\n
	diego2@gmail.com\n
	diego3@mail.com\n
	diego4@gmail.com\n
	diego@ucr.ac.cr\n
	usuario1@example.com\n
	contact@micorreo.net\n
	http://www.ejemplo1.com\n
	https://www.prueba123.net\n
	http://www.miwebficticia.org\n
	https://www.misitiofake.info\n
	http://www.sitioejemplo123.edu\n
	info@correo123.org\n
	support@correo-falso.info\n
	john.doe@email-empresa.edu\n
	Las expresiones regulares (también conocidas como regex o regexp) son patrones utilizados para buscar y manipular cadenas de texto \n
	de una manera más flexible y poderosa. Permiten realizar búsquedas de patrones dentro de texto, validar cadenas, realizar sustituciones \n
	y mucho más.
	EOF

p1: $(TARGET)
	./build/$(TARGET) noexiste.txt

p2: $(TARGET) sinpalabras.txt 
	./build/$(TARGET) sinpalabras.txt

p3: $(TARGET) sincontenido.txt 
	./build/$(TARGET) sincontenido.txt 

p4: $(TARGET) solucion.txt 
	./build/$(TARGET) solucion.txt 

# Compilador de C++
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = src/main.cpp 

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS= $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos fuente en archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto
$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o ./build/$(TARGET) $(OBJECTS)
execute:
	./build/$(TARGET)
# Regla para limpiar los archivos generados
.PHONY: clean
clean:
	rm -f ./build/$(TARGET) $(OBJECTS) 