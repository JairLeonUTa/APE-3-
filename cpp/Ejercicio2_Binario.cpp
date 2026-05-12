#include <iostream>
#include <string>

struct Nodo {
    int valor;
    Nodo* izquierdo;
    Nodo* derecho;
    Nodo(int v) : valor(v), izquierdo(nullptr), derecho(nullptr) {}
};

Nodo* insertar(Nodo* raiz, int valor) {
    if (raiz == nullptr) return new Nodo(valor);
    if (valor < raiz->valor) {
        raiz->izquierdo = insertar(raiz->izquierdo, valor);
    } else {
        raiz->derecho = insertar(raiz->derecho, valor);
    }
    return raiz;
}

int main() {
    Nodo* raiz = new Nodo(10);
    insertar(raiz, 5);
    insertar(raiz, 15);
    insertar(raiz, 3);
    
    std::cout << "--- Prueba Ejercicio 2 ---\n";
    std::cout << "Raiz (Esperado 10): " << raiz->valor << "\n";
    std::cout << "Hijo Izquierdo de Raiz (Esperado 5): " << (raiz->izquierdo ? std::to_string(raiz->izquierdo->valor) : "null") << "\n";
    std::cout << "Hijo Derecho de Raiz (Esperado 15): " << (raiz->derecho ? std::to_string(raiz->derecho->valor) : "null") << "\n";
    return 0;
}