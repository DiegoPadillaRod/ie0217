# Importando librerias necesarias
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.preprocessing import StandardScaler

# Leyendo y creando mi Data Frame
data = pd.read_csv('conjunto_datos12670825.csv')

# datos que voy a analizar
datos_analisis = ['Altura', 'Peso', 'Edad']

# mis nuevos datos
data = data[datos_analisis]


# Variables para el análisis de clustering
mis_clusters = data[['Peso', 'Altura']]

# Estandarizando los datos lo llevamos a una media cero
# y una desviacion estandar de uno
escalador = StandardScaler()
escalados = escalador.fit_transform(mis_clusters)

# Calcular la inercia para diferentes cantidades de clusters
inercia = []
for k in range(2, 11):
    kmeans = KMeans(n_clusters=k, random_state=42, n_init=10)
    kmeans.fit(escalados)
    inercia.append(kmeans.inertia_)

# Elegiiendo el número óptimo de clusters y aplicar K-means
k_optimo = 5 
kmeans = KMeans(n_clusters=k_optimo, random_state=42, n_init=10)
data['Cluster'] = kmeans.fit_predict(escalados)

# Visualizar clusters 
plt.scatter(data['Peso'], data['Altura'], c=data['Cluster'],
            cmap='viridis', alpha=0.5) 
plt.title('Clusters personas') 
plt.xlabel('Peso')  # titulo eje x
plt.ylabel('Altura')  # titulo eje y
plt.show()
