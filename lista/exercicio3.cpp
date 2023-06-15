#include <iostream>

using namespace std;

class Pilha {
private:
    int tamanhoMaximo;
    int* elementos;
    int topo;

public:
    Pilha(int tamanhoMax) : tamanhoMaximo(tamanhoMax), topo(-1) {
        elementos = new int[tamanhoMaximo];
    }

    ~Pilha() {
        delete[] elementos;
    }

    bool estaVazia() const {
        return topo == -1;
    }

    bool estaCheia() const {
        return topo == tamanhoMaximo - 1;
    }

    void empilhar(int elemento) {
        if (estaCheia()) {
            cout << "Erro: a pilha está cheia." << endl;
            return;
        }

        topo++;
        elementos[topo] = elemento;
    }

    int desempilhar() {
        if (estaVazia()) {
            cout << "Erro: a pilha está vazia." << endl;
            return -1;
        }

        int elementoDesempilhado = elementos[topo];
        topo--;

        return elementoDesempilhado;
    }
};

int main() {
    int tamanhoMaximo;
    cout << "Digite o tamanho máximo da pilha: ";
    cin >> tamanhoMaximo;

    Pilha pilha(tamanhoMaximo);

    pilha.empilhar(10);
    pilha.empilhar(20);
    pilha.empilhar(30);

    cout << "Desempilhando: " << pilha.desempilhar() << endl;
    cout << "Desempilhando: " << pilha.desempilhar() << endl;

    if (pilha.estaVazia()) {
        cout << "A pilha está vazia." << endl;
    } else {
        cout << "A pilha não está vazia." << endl;
    }

    return 0;
}
