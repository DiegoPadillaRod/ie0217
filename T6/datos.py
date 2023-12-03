# @file datos.py
# @author Diego Padilla Rodríguez
# @brief Este programa se basa en la idea de tratar de entender las mayores causas en retrasos de vuelos
# @version 1.0
# @date 2023-12-2

# Importando librerias necesarias
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.preprocessing import StandardScaler
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error, r2_score
from sklearn.impute import SimpleImputer

# Cargar el archivo CSV, descargado de Keggel
data = pd.read_csv('2022.csv')

# Seleccionar variables para el análisis
datos_analisis = ['DEP_TIME', 'DEP_DELAY', 'DELAY_DUE_CARRIER', 'DELAY_DUE_WEATHER',
                      'DELAY_DUE_NAS', 'DELAY_DUE_SECURITY', 'DELAY_DUE_LATE_AIRCRAFT']

data = data[datos_analisis]

# Limpiando dataset manejaando valores nulos con ayuda de una funcion de la libreria Scikit
limpio = SimpleImputer(strategy='mean')
data = pd.DataFrame(limpio.fit_transform(data), columns=data.columns) # Creando nuestro Data Frame Final


## Parte Clustering 

# Visualizar datos para entender su estructura y distribución

# DEP_TIME: cuanto dura moviendose la aeronave 
# DEP_DELAY: retraso en la salida del vuelo 
# DELAY_DUE_CARRIER: retrasos por mantenimientos o por carga de equipaje
# DELAY_DUE_WEATHER: retraso por mal tiempo
# DELAY_DUE_NAS: retraso por indicaciones de la torre de control
# DELAY_DUE_SECURITY: retraso por seguridad 
# DELAY_DUE_LATE_AIRCRAFT: atraso por aeronave retrasada

data.hist(figsize=(12, 10), bins=20)
plt.suptitle('Distribución de Variables')
plt.show()

# Variables para el análisis de clustering
interesante_cluster = data[['DEP_TIME', 'DEP_DELAY']]

# Estandarizando los datos lo llevamos a una media cero y una desviacion estandar de uno
escalador = StandardScaler()
escalados = escalador.fit_transform(interesante_cluster)

# Calcular la inercia para diferentes cantidades de clusters
inercia = []
for k in range(2, 11):
    kmeans = KMeans(n_clusters=k, random_state=42, n_init=10)
    kmeans.fit(escalados)
    inercia.append(kmeans.inertia_)

# Graficar el método del codo
plt.plot(range(2, 11), inercia, marker='o')
plt.title('Método del Codo para K-means')
plt.xlabel('Número de Clusters (k)')
plt.ylabel('Inercia')
plt.show()

# Elegiiendo el número óptimo de clusters y aplicar K-means
k_optimo = 4  # Elegir según el análisis anterior
kmeans = KMeans(n_clusters=k_optimo, random_state=42, n_init=10)
data['Cluster'] = kmeans.fit_predict(escalados)

# Visualizar clusters por medio de graficos de dispersion
plt.scatter(data['DEP_TIME'], data['DEP_DELAY'], c=data['Cluster'], cmap='viridis', alpha=0.5) # Modificando la visualizacion de los clusters
plt.title('Clusters de Vuelos') 
plt.xlabel('DEP_TIME(Tiempo de retraso aeronave)') # titulo eje x
plt.ylabel('DEP_DELAY(Retraso en la salida)') # titulo eje y
plt.show()

## Parte Regresiones 

# Realizando el análisis exploratorio inicial
variables_predict = data[['DEP_TIME', 'DEP_DELAY']]
variable_respuesta = 'DELAY_DUE_CARRIER'

# Filtrar solo las filas con retraso o datos para el análisis de regresiones
retrasos = data[data[variable_respuesta] > 0]

# Seleccionar variables para la regresión
X = retrasos[['DEP_TIME', 'DEP_DELAY']]
y = retrasos['DELAY_DUE_CARRIER']

# Crear y ajustar el modelo de regresión lineal multiple
model = LinearRegression()
model.fit(X, y)

# Graficar la línea de regresión
plt.scatter(X['DEP_DELAY'], y, color='blue')
plt.plot(X['DEP_DELAY'], model.predict(X), color='red', linewidth=2)
plt.title('Regresion Lineal')
plt.xlabel('DEP_DELAY(Retraso en la salida final)')
plt.ylabel('DELAY_DUE_CARRIER(Retraso por carga de equipaje)')
plt.legend()
plt.show()

# Calcular el coeficiente de determinación (R²)
r2 = model.score(X, y) # metodo de scikit
print("coeficiente de determinación (R²)", r2)

# Hacer predicciones utilizando el modelo de regresión y graficar
y_pred = model.predict(X)
plt.scatter(X['DEP_DELAY'], y, color='blue')
plt.scatter(X['DEP_DELAY'], y_pred, color='red')
plt.title('Predicción')
plt.xlabel('DEP_DELAY(Retraso en la salida final)')
plt.ylabel('DELAY_DUE_CARRIER(Retraso por carga de equipaje)')
plt.legend()
plt.show()