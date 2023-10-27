# IE-0217
# SEGUNDO SEMESTRE DEL 2023
# TAREA 04
# ESTUDIANTE: DIEGO PADILLA RODRIGUEZ CARNET: C15769
# FECHA DE REALIZACION: 26/10/2023

"""
Clase Restaurante.
Esta clase nos permite crear objetos de tipo restaurantes
con un nombre y un tipo de cocina.
Atributos:
    nombre : El nombre del restaurante.
    tipo_cocina : El tipo de cocina del restaurante.
"""


class Restaurante:

    # Constructor creando instancias
    def __init__(self, nombre, cocina):

        self.__nombre = nombre  # Atributo privado
        self.__tipo_cocina = cocina  # Atributo privado

    # Metodo que nos permite modificar el nombre del rest
    def rest_nombre(self, nombre):

        self.__nombre = nombre

    # Metodo que nos permite modificar el tipo de cocina del rest
    def tipo_cocina(self, cocina):

        self.__tipo_cocina = cocina

    # Muestra en pantalla los datos brindados por el usuario
    def describe_restaurante(self):

        return f"Nombre: {self.__nombre}\nTipo de cocina: {self.__tipo_cocina}"


"""
Clase MenusTematicos.
Esta clase nos permite crear objetos de tipo menu
con un nombre.
Atributos Heredados de clase Restaurante:
    nombre : El nombre del restaurante.
    tipo_cocina : El tipo de cocina del restaurante.
    menu : El nombre que recibira el menu tematico
"""


class MenusTematicos(Restaurante):
    # Constructor creando instancias
    def __init__(self, nombre, cocina, menu):

        # Usando super() para heredar los atributos
        super().__init__(nombre, cocina)
        # Atributo privado
        self.__menu_tematico = menu

    # Metodo que nos permite modificar el nombre del menu
    def nombre_menu_tematico(self, menu):

        self.__menu_tematico = menu

    def soy_menu_tematico(self):
        # Accediendo a la informacion que brindo el usuario.
        return self.__menu_tematico


if __name__ == "__main__":

    # Creando el menu que permite interactuar con el programa
    print("Bienvenido al sistema de gestión de Bares.")

    # Esperando respuesta del usuario
    nombre = input("Ingrese el nombre del restaurante: ")

    # Esperando respuesta del usuario
    tipo_cocina = input("Ingrese el tipo de cocina: ")

    # Creando Objeto Restaurante
    rest = Restaurante(nombre, tipo_cocina)

    print(f"Restaurante registrado con éxito:\n"
          f"{rest.describe_restaurante()}")

    # Esperando respuesta del usuario
    respuesta = input("¿Desea agregar un menú temático? (s/n): ")

    if respuesta == "s":

        # Esperando respuesta del usuario
        nombre_menu = input("Ingrese el nombre del menú temático: ")

        # Creando Objeto menu tematico
        menu_fin = MenusTematicos(nombre, tipo_cocina, nombre_menu)

        print(f"Menú temático registrado con éxito: "
              f"{menu_fin.soy_menu_tematico()}")

    print("Gracias por usar el sistema de gestión de bares."
          " Hasta pronto querido usuario <3 tqm!")