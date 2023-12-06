# Examen Final


***Comandos e Informe para Examen Final ***


***Es importante estar ubicados en el branch main para visualizar el directorio del Examen***


**Para motivos de la ejecuación del código con el que obtemos los datos, el cual esta añadido en este directorio ejecutar los siguientes pasos y comandos**

<sub>Pasos a seguir en Windows</sub>
```
cd ".\Examen Final"
python .\Mis_Datos.py
```
<sub>Pasos a seguir en Linux</sub>
```
cd ".\Examen Final"
python3 .\Mis_Datos.py
```

## Informe Final para la solución de los ítems
<div style="text-align: justify">

# Respuestas 
## Estudiante
# Diego Padilla Rodríguez
# Los comandos de ejecución en esta sección están pensados para Windows(Powershell) ver el comando relacionado a Linux en la parte inicial del readme.


# 1. Explique el concepto de herencia en programación orientada a objetos (POO) y proporcione un ejemplo específico relacionado con el conjunto de datos bajo estudio.

## Concepto de Herencia:
A mi parecer el concepto de herencia se basa más que todo en la similitud, pero no la copia en su totalidad de atributos o métodos de una clase padre hacia una clase hija, la herencia aprovecha las funcionalidades de una clase que puedan ser de ayuda para otra clase con diferente propósito, por ejemplo si yo tendría una clase llamada Perros, y esta proporciona los atributos, raza, color de pelo, tamaño, pelaje y temperamento, yo podría crear una nueva clase llamada Perros_con_pedigree que herede de la clase Perros todos atributos antes mencionado pero ahora en esta clase añadiré, los atributos, linaje, lugar de procedencia, pureza, árbol genealógico y esperanza de vida. 

Por lo tanto, como concepto yo lo establecería como la capacidad de una clase de heredar atributos y métodos de una clase padre, con el propósito de mejorar la legibilidad de mi código, el mantenimiento y la reutilización de código y lógica en general.


## Ejemplo específico 
```
# Creando mi clase padre
class Perfil_Individuo():

    # El constructor de mi clase
    def __init__(self, Edad, Altura, Peso, ManoDominante, Genero):

        self.Edad = Edad
        self.Altura = Altura
        self.Peso = Peso
        self.ManoDominante = ManoDominante
        self.Genero = Genero

    # Mostrando mis datos.
    def mis_datos(self):
        print("Edad: ", self.Edad, "\nAltura: ", self.Altura,
              "\n...")  # se completan los otros atributos


# Creando mi clase hija
class Me_identifico(Perfil_Individuo):
    yosoy = " "

    def nombre(self):
        self.yosoy = "\nHola me llamo Diego"
        return self.yosoy


# Imprimiendo mis resultados
Perfil_completo = Me_identifico("18", "1.86", "85", "Izq", "Masculino")

Perfil_completo.mis_datos()

print(Perfil_completo.nombre())  # Utilizando mi metodo nuevo de mi clase hijo

```

# 2. Diseñe e implemente una clase llamada Persona con atributos como nombre, edad, y un método que imprima la información de la persona. Luego, herede de la clase Persona para crear una clase Estudiante con atributos adicionales relacionados con el conjunto de datos.

## Para ejcutar el programa 
```
cd ".\Examen Final"
python .\punto2.py
```

# 3. Describa una situación en la que se podría utilizar un decorador en Python y proporcione un ejemplo práctico relacionado con el manejo de excepciones.
## Escenario en que usaria decoradores:

Los decoradores le añaden funciones adicionales a funciones existentes.

# 4. Explique el propósito del bloque with en Python y proporcione un ejemplo práctico relacionado con el manejo de archivos.

## Propósito del bloque with:

Es sumamente utilizado en el contexto de obtener datos o archivos externos al programa, nos proporciona una valiosa excepción que nos permite navegar con archivos a nuestro gusto brindándoles un nombre nuevo a la ruta que nos lleva al archivo sin cambiarle el nombre, obtenido sus datos de forma eficiente y mejorando la legibilidad del código, ya que un texto un ejemplo que contiene facturas de un negocio del mes de junio se llama "12452.txt" con "with" podemos llamarlo como facturas_junio, para darle mejor contexto a nuestro código y que sea más coherente.

## Ejemplo específico 
```
with open('12452.txt') as facturas_junio:
    mis_datos = as facturas_junio.read()
    print(mis_datos)
```

# 5. Utilizando el conjunto de datos proporcionado (guardado en 'conjunto_datos.csv'), cargue los datos en un DataFrame de pandas. Muestre cómo seleccionar solo las filas donde la edad es mayor a 30.

## Para ejcutar el programa 
```
cd ".\Examen Final"
python .\punto5.py
```

# 6. Utilizando el conjunto de datos, cree un gráfico de dispersión que represente la relación entre la altura y el peso de los individuos

## Para ejecutar el grafico de dispersion 
```
cd ".\Examen Final"
python .\punto6.py
```

# 7. Explique en qué situaciones se podría utilizar una regresión lineal y proporcione un ejemplo práctico relacionado con el conjunto de datos.

La regresion lineal nos sirve para obtener la relacion entre 1 o mas variables independientes con una varible dependiente y conocer en que valores estas tiene mayor porcentaje de match.

## Para ejecutar el regresion lineal
```
cd ".\Examen Final"
python .\punto6.py
```

# 8. Describa el concepto de clustering y proporcione un ejemplo práctico de cómo se podría aplicar al conjunto de datos para identificar grupos de personas

El clustring es una forma de agrupar o datos mejor dicho una técnica para presentar, estudiar y entender un conjunto datos, en principio un cluster nos muestra una cierta cantidad de datos que están alrededor de un dato en específico llamado centroide, en resumen es una método de agrupación de datos que nos permite ver patrones y desarrollar estrategias en base al estudio de estos clusters.

## Para ejecutar grafica con clusters
```
cd ".\Examen Final"
python .\punto8.py
```
