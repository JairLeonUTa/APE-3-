#include <iostream>
#include <vector>

struct Nodo {
    int valor;
    Nodo* izquierdo;
    Nodo* derecho;
    Nodo(int v) : valor(v), izquierdo(nullptr), derecho(nullptr) {}
};

void inOrderAux(Nodo* nodo, std::vector<int>& resultado) {
    if (nodo == nullptr) return;
    inOrderAux(nodo->izquierdo, resultado);
    resultado.push_back(nodo->valor);
    inOrderAux(nodo->derecho, resultado);
}

std::vector<int> recorridoInOrder(Nodo* raiz) {
    std::vector<int> resultado;
    inOrderAux(raiz, resultado);
    return resultado;
}

int main4() {
    Nodo* raiz = new Nodo(4);
    raiz->izquierdo = new Nodo(2);
    raiz->derecho = new Nodo(6);
    raiz->izquierdo->izquierdo = new Nodo(1);
    raiz->izquierdo->derecho = new Nodo(3);
    raiz->derecho->izquierdo = new Nodo(5);
    raiz->derecho->derecho = new Nodo(7);

    std::cout << "--- Prueba Ejercicio 4 ---\n";
    std::vector<int> res = recorridoInOrder(raiz);
    std::cout << "Tu resultado: [";
    for(size_t i = 0; i < res.size(); i++) {
        std::cout << res[i] << (i < res.size() - 1 ? ", " : "");
    }
    std::cout << "]\n";
    return 0;
}