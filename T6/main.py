# @file datos.py
# @author Diego Padilla Rodríguez
# @brief 
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

# Manejar valores NaN con SimpleImputer
imputer = SimpleImputer(strategy='mean')
data = pd.DataFrame(imputer.fit_transform(data), columns=data.columns)

