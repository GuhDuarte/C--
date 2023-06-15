#include <iostream>

using namespace std;

class No {
public:
    int valor;
    No* proximo;
    No* anterior;

    No(int valor) : valor(valor), proximo(nullptr), anterior(nullptr) {}
};

class ListaDuplamenteEncadeada {
private:
    No* inicio;
    No* fim;

public:
    ListaDuplamenteEncadeada() : inicio(nullptr), fim(nullptr) {}

    ~ListaDuplamenteEncadeada() {
        while (inicio != nullptr) {
            No* noRemovido = inicio;
            inicio = inicio->proximo;
            delete noRemovido;
        }
    }

    void inserirNoInicio(int valor) {
        No* novoNo = new No(valor);

        if (inicio == nullptr) {
            inicio = fim = novoNo;
        } else {
            novoNo->proximo = inicio;
            inicio->anterior = novoNo;
            inicio = novoNo;
        }
    }

    void inserirNoFim(int valor) {
        No* novoNo = new No(valor);

        if (fim == nullptr) {
            inicio = fim = novoNo;
        } else {
            fim->proximo = novoNo;
            novoNo->anterior = fim;
            fim = novoNo;
        }
    }

    void remover(int valor) {
        No* noAtual = inicio;

        while (noAtual != nullptr) {
            if (noAtual->valor == valor) {
                if (noAtual == inicio && noAtual == fim) {
                    inicio = fim = nullptr;
                } else if (noAtual == inicio) {
                    inicio = inicio->proximo;
                    inicio->anterior = nullptr;
                } else if (noAtual == fim) {
                    fim = fim->anterior;
                    fim->proximo = nullptr;
                } else {
                    noAtual->anterior->proximo = noAtual->proximo;
                    noAtual->proximo->anterior = noAtual->anterior;
                }

                delete noAtual;
                return;
            }

            noAtual = noAtual->proximo;
        }

        cout << "Elemento não encontrado na lista." << endl;
    }

    void imprimir() const {
        No* noAtual = inicio;

        while (noAtual != nullptr) {
            cout << noAtual->valor << " ";
            noAtual = noAtual->proximo;
        }

        cout << endl;
    }
};

int main() {
    ListaDuplamenteEncadeada lista;

    lista.inserirNoFim(10);
    lista.inserirNoInicio(5);
    lista.inserirNoFim(20);
    lista.inserirNoInicio(2);

    lista.imprimir();

    lista.remover(5);

    lista.imprimir();

    lista.remover(20);

    lista.imprimir();

    return 0;
}
