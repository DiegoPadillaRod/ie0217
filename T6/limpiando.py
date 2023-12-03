import pandas as pd

# Lee el archivo CSV
df = pd.read_csv('2022.csv')

# Elimina las filas con valores nulos
df = df.dropna()

# Guarda el DataFrame modificado como un nuevo archivo CSV
df.to_csv('Limpio.csv', index=False)