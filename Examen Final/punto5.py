# Impotando pandas
import pandas as pd

# Leyendo y creando mi Data Frame
data = pd.read_csv('conjunto_datos12670825.csv')

# Me permite filtar quien tiene mas de 30
mas_de_30 = data[data["Edad"] > 30]

# Mostrando en pantalla mayore de 30
print("Tengo mas de 30 que duro\n", mas_de_30.head(15))
