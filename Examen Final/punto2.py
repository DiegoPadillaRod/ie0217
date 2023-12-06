# Creando la CLase Persona
class Persona():

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
              "\nPeso: ", self.Peso, "\nMano Dominante: ", self.ManoDominante, 
              "\nGenero: ", self.Genero) 


# Usando Herencia
class Estudiante(Persona):

    def __init__(self, Edad, Altura, Peso, ManoDominante, Genero, 
                 nombre, calificacion):
        # taryendo a mi constructor
        super().__init__(Edad, Altura, Peso, ManoDominante, Genero)
        # Nuevos atributos
        self.nombre = nombre
        self.calificacion = calificacion

    # Mostrando datos del estudiante
    def datos(self):
        super().mis_datos()
        print("Nombre: ", self.nombre, "\nPromedio: ", self.calificacion)


# Creando instancia y mostrando resultados
Soy_Estudiante = Estudiante("18", "1.86", "85", "Izq", "Masculino",
                            "Dieguillo", "8.5")
Soy_Estudiante.datos()
