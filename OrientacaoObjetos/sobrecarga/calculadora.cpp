#include <iostream>

class Calculadora {
public:
    int somar(int a, int b) {
        return a + b;
    }

    double somar(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculadora calculadora;

    int resultado1 = calculadora.somar(2, 3);
    double resultado2 = calculadora.somar(2.5, 3.7);

    std::cout << "Resultado 1: " << resultado1 << std::endl; // Saída: Resultado 1: 5
    std::cout << "Resultado 2: " << resultado2 << std::endl; // Saída: Resultado 2: 6.2

    return 0;
}
