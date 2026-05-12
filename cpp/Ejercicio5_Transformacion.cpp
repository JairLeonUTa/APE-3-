#include <iostream>
#include <string>

struct Nodo {
    int valor;
    Nodo* izquierdo;
    Nodo* derecho;
    Nodo(int v) : valor(v), izquierdo(nullptr), derecho(nullptr) {}
};

Nodo* invertir(Nodo* raiz) {
    if (raiz == nullptr) return nullptr;
    Nodo* temp = raiz->izquierdo;
    raiz->izquierdo = invertir(raiz->derecho);
    raiz->derecho = invertir(temp);
    return raiz;
}

int main() {
    Nodo* raiz = new Nodo(1);
    raiz->izquierdo = new Nodo(2);
    raiz->derecho = new Nodo(3);

    std::cout << "--- Prueba Ejercicio 5 ---\n";
    std::cout << "Antes de invertir:\n";
    std::cout << "Hijo Izq: " << raiz->izquierdo->valor << " | Hijo Der: " << raiz->derecho->valor << "\n";
    
    invertir(raiz);
    
    std::cout << "\nDespues de invertir:\n";
    std::string izq = raiz->izquierdo ? std::to_string(raiz->izquierdo->valor) : "null";
    std::string der = raiz->derecho ? std::to_string(raiz->derecho->valor) : "null";
    std::cout << "Hijo Izq: " << izq << " | Hijo Der: " << der << "\n";
    
    return 0;
}