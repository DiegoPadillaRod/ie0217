# Impotando liberias

import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Leyendo y creando mi Data Frame
data = pd.read_csv('conjunto_datos12670825.csv')

# datos que voy a analizar
datos_analisis = ['Altura', 'Peso', 'Edad']

# mis nuevos datos
data = data[datos_analisis]

# creando mi regresion lineal
# Realizando el análisis exploratorio inicial

variables_predict = data[['Altura', 'Peso']]
variable_respuesta = 'Edad'

# Filtrar solo las filas con datos para el análisis de regresiones
caracteristicas = data[data[variable_respuesta] > 0]

# Seleccionar variables para la regresión
X = caracteristicas[['Altura', 'Peso']]
y = caracteristicas['Edad']

# Crear y ajustar el modelo de regresión lineal multiple
model = LinearRegression()
model.fit(X, y)

# Graficar la línea de regresión
plt.scatter(X['Peso'], y, color='blue')
plt.plot(X['Peso'], model.predict(X), color='red', linewidth=0.5)
plt.title('Regresion Lineal')
plt.xlabel('Peso')
plt.ylabel('Edad')
plt.legend()
plt.show()
