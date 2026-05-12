#include <iostream>
#include <vector>

struct NodoN {
    int valor;
    std::vector<NodoN*> hijos;
    NodoN(int v) : valor(v) {}
};

int contarNodos(NodoN* raiz) {
    if (raiz == nullptr) return 0;
    int total = 1;
    for (NodoN* hijo : raiz->hijos) {
        total += contarNodos(hijo);
    }
    return total;
}

int main1() {
    NodoN* n5 = new NodoN(5);
    NodoN* n6 = new NodoN(6);
    NodoN* n2 = new NodoN(2);
    n2->hijos.push_back(n5);
    n2->hijos.push_back(n6);
    NodoN* n3 = new NodoN(3);
    NodoN* n4 = new NodoN(4);
    NodoN* raiz = new NodoN(1);
    raiz->hijos.push_back(n2);
    raiz->hijos.push_back(n3);
    raiz->hijos.push_back(n4);

    std::cout << "--- Prueba Ejercicio 1 ---\n";
    std::cout << "Nodos esperados: 6\n";
    std::cout << "Nodos calculados: " << contarNodos(raiz) << "\n";

    // Buenas prácticas en C++: Liberar la memoria dinámica
    delete n5;
    delete n6;
    delete n2;
    delete n3;
    delete n4;
    delete raiz;

    return 0;
}