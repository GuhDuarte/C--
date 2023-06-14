#include <iostream>

class Retangulo {
private:
    int comprimento;
    int largura;

public:
    Retangulo() : comprimento(0), largura(0) {
        std::cout << "Construtor padrão chamado." << std::endl;
    }

    Retangulo(int c) : comprimento(c), largura(0) {
        std::cout << "Construtor com um argumento chamado." << std::endl;
    }

    Retangulo(int c, int l) : comprimento(c), largura(l) {
        std::cout << "Construtor com dois argumentos chamado." << std::endl;
    }

    void exibir() {
        std::cout << "Comprimento: " << comprimento << ", Largura: " << largura << std::endl;
    }
};

int main() {
    Retangulo ret1;          // Construtor padrão chamado
    Retangulo ret2(5);       // Construtor com um argumento chamado
    Retangulo ret3(3, 4);    // Construtor com dois argumentos chamado

    ret1.exibir();           // Saída: Comprimento: 0, Largura: 0
    ret2.exibir();           // Saída: Comprimento: 5, Largura: 0
    ret3.exibir();           // Saída: Comprimento: 3, Largura: 4

    return 0;
}
