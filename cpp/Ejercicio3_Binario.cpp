#include <iostream>
#include <algorithm>

struct Nodo {
    int valor;
    Nodo* izquierdo;
    Nodo* derecho;
    Nodo(int v) : valor(v), izquierdo(nullptr), derecho(nullptr) {}
};

int calcularAltura(Nodo* raiz) {
    if (raiz == nullptr) return 0;
    return 1 + std::max(calcularAltura(raiz->izquierdo), calcularAltura(raiz->derecho));
}

int main() {
    Nodo* raiz = new Nodo(1);
    raiz->derecho = new Nodo(2);
    raiz->derecho->izquierdo = new Nodo(3);
    
    std::cout << "--- Prueba Ejercicio 3 ---\n";
    std::cout << "Altura esperada: 3\n";
    std::cout << "Altura calculada: " << calcularAltura(raiz) << "\n";
    return 0;
}