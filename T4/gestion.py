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
Atributos  y Atributos Heredados de clase Restaurante:
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


"""
Clase HeladoCacique.
Esta clase nos permite crear objetos de tipo helado
cacique con un sabor o varios sabores.
Atributos de clase HeladoCacique:
    nombre : El nombre del restaurante.
    tipo_cocina : El tipo de cocina del restaurante.
    menu : El nombre que recibira el menu tematico
"""


class HeladoCacique:

    # Constructor crenado instancia
    def __init__(self):
        # Creando lista vacia
        self.__sabores = []

    # Metodo que agrega sabores a la lista
    def agregar_sabor(self, sabor):
        self.__sabores.append(sabor)

    # Metodo que accede a la lista e imprime los sabores registrados
    def mostrar_sabores(self):
        return ", ".join(self.__sabores)


# Función externa que valida si la entrada no esta vacia
def validarentrada(entrada):
    return entrada.strip() != ""


# Función externa que valida si la entrada es s o n
def si_o_no(entrada):
    if entrada == 's' or entrada == 'n':
        return False
    return True


if __name__ == "__main__":

    # Creando el menu que permite interactuar con el programa
    print("Bienvenido al sistema de gestión de Bares.\n")

    # Esperando respuesta del usuario
    nombre = input("Por favor, ingrese el nombre del restaurante: ")

    # Ciclo while validando entrada.
    while not validarentrada(nombre):

        # Error intrada invalida
        print("ERROR!!! El nombre no puede estar vacío. Inténtelo de nuevo.")

        nombre = input("Por favor, ingrese el nombre del restaurante: ")

    # Esperando respuesta del usuario
    tipo_cocina = input("Ingrese el tipo de cocina: ")

    # Ciclo while validando entrada.
    while not validarentrada(tipo_cocina):

        # Error intrada invalida
        print("ERROR!!! El tipo de cocina no puede estar vacío."
              " Inténtelo de nuevo.")

        tipo_cocina = input("Ingrese el tipo de cocina: ")

    # Creando Objeto Restaurante
    rest = Restaurante(nombre, tipo_cocina)

    print("\nRestaurante registrado con éxito:\n"
          f"{rest.describe_restaurante()}")

    # Esperando respuesta del usuario
    respuesta = input("\n¿Desea agregar un menú temático? (s/n): ")

    while si_o_no(respuesta):

        # Error intrada invalida
        print("ERROR!!! La respuesta es inválida, "
              "debe ser si 's' o no 'n'. Inténtelo de nuevo.")

        respuesta = input("¿Desea agregar un menú temático? (s/n): ")

    if respuesta == "s":

        # Esperando respuesta del usuario
        nombre_menu = input("\nIngrese el nombre del menú temático: ")

        # Ciclo while validando entrada.
        while not validarentrada(nombre_menu):

            # Error intrada invalida
            print("ERROR!!! El nombre del menú no puede estar vacío."
                  "Inténtelo de nuevo.")

            nombre_menu = input("Ingrese el nombre del menú temático: ")

        # Creando Objeto menu tematico
        menu_fin = MenusTematicos(nombre, tipo_cocina, nombre_menu)

        print(f"Menú temático registrado con éxito: "
              f"{menu_fin.soy_menu_tematico()}")

        # Creando Objeto helado cacique
        helado_cacique = HeladoCacique()

        # Esperando respuesta del usuario
        respuesta = input("\n¿Desea agregar un sabor de helado Cacique? "
                          "(s/n): ")

        # Ciclo while validando entrada
        while si_o_no(respuesta):

            # Error intrada invalida
            print("ERROR!!! La respuesta es inválida, "
                  "debe ser si 's' o no 'n'. Inténtelo de nuevo.")

            respuesta = input("¿Desea agregar un sabor de helado Cacique? "
                              "(s/n): ")

        # Ciclo while respuesta si.
        while respuesta == "s":

            sabor = input("\nIngrese el sabor para crear su exquisitez: ")

            if validarentrada(sabor):

                # Agregando informacion a la lista
                helado_cacique.agregar_sabor(sabor)

                # Mostrando los sabores registrados
                print("\nSabor agregado con éxito.!!")
                print("Sabores disponibles: " +
                      f"{helado_cacique.mostrar_sabores()}")

            else:

                # Error intrada invalida
                print("ERROR!!! El sabor no puede estar vacío. "
                      "Inténtelo de nuevo.")
            # Esperando respuesta del usuario
            respuesta = input("\n¿Desea agregar otro sabor de helado Cacique? "
                              "(s/n): ")

    # Despida y final del programa
    print("Gracias por usar el sistema de gestión de bares."
          " Hasta pronto querido usuario <3 tqm!")
