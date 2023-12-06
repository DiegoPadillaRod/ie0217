# Impotando pandas y plt
import pandas as pd
import matplotlib.pyplot as plt

# Leyendo y creando mi Data Frame
data = pd.read_csv('conjunto_datos12670825.csv')

# datos que voy a analizar
datos_analisis = ['Altura', 'Peso',]

# mis nuevos datos
data = data[datos_analisis]

# Mostrando mi grafico de dispersion
plt.scatter(data['Altura'], data['Peso'], cmap='viridis', alpha=0.5)
plt.title('Altura vs Peso')
plt.xlabel('Altura')  # titulo eje x
plt.ylabel('Peso')  # titulo eje y
plt.show()
