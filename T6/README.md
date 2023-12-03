# Tarea 6


***Comandos para tarea 6***


***Es importante estar ubicados en el branch feature/feature-T6 para visualizar el directorio de la Tarea***

***Son 5 graficos se despliega uno a la vez cerrar ventana para ver el siguiente***

**Para motivos de la ejecuación del código añadido en el directorio T6 de este repositorio seguir los siguientes pasos**

<sub>Pasos a seguir en Windows</sub>
```
cd .\T6
python .\datos.py
```
<sub>Pasos a seguir en Linux</sub>
```
cd .\T6
python3 datos.py
```

## Informe
<div style="text-align: justify">

# Analizando 
## Estudiante
# Diego Padilla Rodríguez

## Descripción del Proyecto

En esta tarea se utilizaron diferentes conceptos y detalles relacionados al clustering y regresiones, estos conocimientos se aplicaron desde buen inicio, debido a que al ser yo un estudiante principiante en el mundo de análisis de datos los conocimientos iniciales me permitieron escoger un dataset que estuviera dentro de mis posibilidades de análisis ya que algunos de los encontrados en Kaggel o BTS eran para personas mas experimentadas, por mi parte opté por un archivo csv que contaba con múltiples causas de los retrasos en vuelos comerciales, mi idea fue relacionar un tipo de retraso con otros, por ejemplo quería demostrar si un retraso en mantenimiento o limpieza de la aeronave se relacionaba con retrasos en la salida o el tiempo de movilización de la aeronave, primero comencé obteniendo los datos, en específico un archivo de 1000 líneas, luego de esto como parte de mis conocimientos en clustering busque dividir parte de los datos en clusters, para luego de visualizar los resultados y optar por los clusters que a mi parecer agrupaban de mejor forma los datos. Por su parte para regresiones se me dificulto más el proceso pero mi idea siempre fue buscar una distribución ordenada y con sentido, se buscó obtener correlaciones por medio de gráficos de dispersión con ayuda de una regresión lineal simple, que pudiera correlacionar datos de forma que tuvieran sentido.


<p align="center">
    <img src="https://github.com/DiegoPadillaRod/ie0217-proyecto/blob/main/Propuesta/Imagenes/Qt.png" />
</p>


### Resumen General

- A continuación, se proporcionarán imágenes de la gráficas para complementar el informe, mi idea fue demostrar mis capacidades para la obtención y diseño de gráficas entendibles, además de la utilización de conceptos como kmeans, clusters, número óptimo de clusters, regresión lineal, ajuste, visualización, etc. Al ser un tema del cual no conozco mucho las relaciones quizás no son las más acertadas, pero eso ya son más cuestiones para aprender en el sector de data analysis.



* Graficas con los datos elegidos.
* DEP_TIME: cuanto dura moviendose la aeronave 
* DEP_DELAY: retraso en la salida del vuelo 
* DELAY_DUE_CARRIER: retrasos por mantenimientos o por carga de equipaje
* DELAY_DUE_WEATHER: retraso por mal tiempo
* DELAY_DUE_NAS: retraso por indicaciones de la torre de control
* DELAY_DUE_SECURITY: retraso por seguridad 
* DELAY_DUE_LATE_AIRCRAFT: atraso por aeronave retrasada

<p align="center">
    <img src="https://github.com/DiegoPadillaRod/ie0217-proyecto/blob/main/Propuesta/Imagenes/1.jpg" />
</p>

* Aplicando metodo del codo obtemos un resultadi bastante satisfactorio, determinamos un k=4, ya que asi se agrupan y se distinguen mejor los datos
<p align="center">
    <img src="https://github.com/DiegoPadillaRod/ie0217-proyecto/blob/main/Propuesta/Imagenes/2.jpg" />
</p>

* Vemos nuestros clusters bien definidos, uno mas disperso pero es necesario ya que un numero menor de clusters no permite ubicar bien los datos.
<p align="center">
    <img src="https://github.com/DiegoPadillaRod/ie0217-proyecto/blob/main/Propuesta/Imagenes/3.jpg" />
</p>

* Regresion lineal
<p align="center">
    <img src="https://github.com/DiegoPadillaRod/ie0217-proyecto/blob/main/Propuesta/Imagenes/4.jpg" />
</p>

* Modelo de prediccion
<p align="center">
    <img src="https://github.com/DiegoPadillaRod/ie0217-proyecto/blob/main/Propuesta/Imagenes/5.1.jpg" />
</p>