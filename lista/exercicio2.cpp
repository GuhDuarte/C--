#include <iostream>
#include <vector>

using namespace std;

class Matriz {
private:
    int linhas;
    int colunas;
    vector<vector<int>> elementos;

public:
    Matriz(int linhas, int colunas) : linhas(linhas), colunas(colunas) {
        elementos.resize(linhas, vector<int>(colunas, 0));
    }

    void preencher() {
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                cout << "Digite o elemento [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> elementos[i][j];
            }
        }
    }

    Matriz somar(const Matriz& outra_matriz) const {
        if (linhas != outra_matriz.linhas || colunas != outra_matriz.colunas) {
            cout << "As matrizes não têm o mesmo tamanho." << endl;
            return Matriz(0, 0);
        }

        Matriz resultado(linhas, colunas);
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                resultado.elementos[i][j] = elementos[i][j] + outra_matriz.elementos[i][j];
            }
        }

        return resultado;
    }

    Matriz multiplicarPorEscalar(int escalar) const {
        Matriz resultado(linhas, colunas);
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                resultado.elementos[i][j] = elementos[i][j] * escalar;
            }
        }

        return resultado;
    }

    void imprimir() const {
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                cout << elementos[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int linhas, colunas;
    cout << "Digite o número de linhas da matriz: ";
    cin >> linhas;
    cout << "Digite o número de colunas da matriz: ";
    cin >> colunas;

    Matriz matriz1(linhas, colunas);
    cout << "Preencha a matriz 1:" << endl;
    matriz1.preencher();

    Matriz matriz2(linhas, colunas);
    cout << "Preencha a matriz 2:" << endl;
    matriz2.preencher();

    cout << "Matriz 1:" << endl;
    matriz1.imprimir();

    cout << "Matriz 2:" << endl;
    matriz2.imprimir();

    Matriz soma = matriz1.somar(matriz2);
    cout << "Soma das matrizes:" << endl;
    soma.imprimir();

    int escalar;
    cout << "Digite um escalar para multiplicar a matriz 1: ";
    cin >> escalar;
    Matriz multiplicacao = matriz1.multiplicarPorEscalar(escalar);
    cout << "Multiplicação da matriz 1 por um escalar:" << endl;
    multiplicacao.imprimir();

    return 0;
}
