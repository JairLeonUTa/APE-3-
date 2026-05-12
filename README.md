# Práctica de Estructuras de Datos: Árboles (C++ y Java)
> **Universidad Técnica de Ambato (UTA)** > **Asignatura:** Estructura de Datos  
> **Autor:** Jair León
> **Docente: ** Ing.Jose Caiza, Mg.
> **APE 3**

Este repositorio contiene la resolución de los ejercicios prácticos enfocados en la implementación y manipulación de estructuras de datos no lineales (Árboles N-arios y Árboles Binarios). 

Todos los algoritmos han sido desarrollados en dos lenguajes de programación: **C++** y **Java**, permitiendo analizar las diferencias en el manejo de memoria (punteros vs. referencias) y la sintaxis orientada a objetos de cada uno.

## 🎯 Competencias Desarrolladas

Durante la resolución de estos ejercicios se aplicaron los siguientes conceptos:
1. Comprensión y manipulación de la estructura básica de nodos (hijos múltiples y binarios).
2. Implementación lógica de inserción en un Árbol Binario de Búsqueda (BST).
3. Uso de la recursividad para calcular métricas estructurales, como la profundidad o altura máxima.
4. Extracción y ordenamiento de datos mediante recorridos estándar (In-Order).
5. Modificación de la estructura subyacente y referencias para transformar un árbol (Árbol Espejo / Inversión).

## 📂 Estructura del Repositorio

El proyecto se divide en 5 ejercicios fundamentales. Cada ejercicio cuenta con su respectivo código fuente implementando la solución tanto en la carpeta `/cpp` como en `/java`.

1. **Ejercicio 1: Árboles Básicos** - Conteo de nodos en árboles N-arios utilizando recursividad.
2. **Ejercicio 2: Árbol Binario** - Algoritmo de inserción en un BST (Binary Search Tree).
3. **Ejercicio 3: Árbol Binario** - Cálculo de la profundidad/altura máxima del árbol.
4. **Ejercicio 4: Recorridos** - Implementación del recorrido *In-Order* y almacenamiento en estructuras dinámicas (List/Vector).
5. **Ejercicio 5: Transformación** - Inversión de las ramas de un árbol (creación de un árbol espejo).

## 🚀 Cómo compilar y ejecutar

Cada archivo contiene su propio método `main` con un árbol de prueba preconstruido y las impresiones necesarias para validar por consola que los algoritmos funcionan correctamente.

### Para C++
Es importante compilar cada archivo de forma individual para evitar conflictos de múltiples definiciones de `main`. Utiliza un compilador que soporte el estándar C++11 o superior:

```bash
# Ejemplo para compilar y ejecutar el Ejercicio 1
g++ Ejercicio1_Basico.cpp -o ej1 -std=c++11
./ej1
