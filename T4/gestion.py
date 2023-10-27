"""
    Clase restaurante, describe un restaurante.
    Esta clase nos permite crear objetos de tipo restaurantes
    con un nombre y un tipo de cocina.
    Atributos:
        nombre (str): El nombre del restaurante.
        tipo_cocina (str): El tipo de cocina del restaurante.
"""
class Restaurante:
    def __init__(self, nombre, cocina):# Constructor

        self.__nombre = nombre#Atributo privado

        self.__tipo_cocina = cocina#Atributo privado


    def rest_nombre(self, nombre):#Metodo que nos permite modificar el nombre del rest

        self.__nombre = nombre


    def tipo_cocina(self, cocina): ##Metodo que nos permite modificar el tipo de cocina del rest

        self.__tipo_cocina = cocina 


    def describe_restaurante(self): #Muestra en pantalla los datos brindados por el usuario

        return f"Nombre: {self.__nombre}\nTipo de cocina: {self.__tipo_cocina}"

if __name__ == "__main__":
    print("Bienvenido al sistema de gestión de Bares.")

    nombre = input("Ingrese el nombre del restaurante: ")

    tipo_cocina = input("Ingrese el tipo de cocina: ")

    restaurante = Restaurante(nombre, tipo_cocina)
    print(f"Restaurante registrado con éxito:\n{restaurante.describe_restaurante()}")