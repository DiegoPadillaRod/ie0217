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
