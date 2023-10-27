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
    def __init__(self, nombre, cocina): # Constructor creando instancias

        self.__nombre = nombre # Atributo privado

        self.__tipo_cocina = cocina # Atributo privado


    def rest_nombre(self, nombre): # Metodo que nos permite modificar el nombre del rest

        self.__nombre = nombre


    def tipo_cocina(self, cocina): # Metodo que nos permite modificar el tipo de cocina del rest

        self.__tipo_cocina = cocina 


    def describe_restaurante(self): # Muestra en pantalla los datos brindados por el usuario

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
    def __init__(self, nombre, cocina, menu): # Constructor creando instancias

        super().__init__(nombre, cocina) # Usando super() para heredar los atributos

        self.__menu_tematico = menu # Atributo privado

    def nombre_menu_tematico(self, menu): # Metodo que nos permite modificar el nombre del menu
        self.__menu_tematico = menu

    def soy_menu_tematico(self): # Accediendo a la informacion que brindo el usuario.
        return self.__menu_tematico

if __name__ == "__main__":
    print("Bienvenido al sistema de gestión de Bares.")

    nombre = input("Ingrese el nombre del restaurante: ")

    tipo_cocina = input("Ingrese el tipo de cocina: ")

    restaurante = Restaurante(nombre, tipo_cocina) # Creando Objeto Restaurante
    print(f"Restaurante registrado con éxito:\n{restaurante.describe_restaurante()}")

    respuesta = input("¿Desea agregar un menú temático? (s/n): ")

    if respuesta == "s":
        nombre_menu = input("Ingrese el nombre del menú temático: ")
        menu_tematico = MenusTematicos(nombre, tipo_cocina, nombre_menu) # Creando Objeto menu tematico
        print(f"Menú temático registrado con éxito: {menu_tematico.soy_menu_tematico()}") 
print("Gracias por usar el sistema de gestión de bares. Hasta pronto querido usuario <3 tqm!")