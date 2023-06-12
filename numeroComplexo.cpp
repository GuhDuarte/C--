#include <iostream>
#include <cmath>

// Definição da classe NComplexo
class NComplexo {
private:
    double real;
    double imaginario;

public:
    NComplexo(double r, double i) {
        real = r;
        imaginario = i;
    }

    // Métodos para obter a parte real e imaginária
    double getReal() const {
        return real;
    }

    double getImaginario() const {
        return imaginario;
    }

    // Método para calcular o módulo do número complexo
    double modulo() const {
        return std::sqrt(real * real + imaginario * imaginario);
    }

    // Método para calcular o conjugado do número complexo
    NComplexo conjugado() const {
        return NComplexo(real, -imaginario);
    }

    // Sobrecarga do operador de adição
    NComplexo operator+(const NComplexo& outro) const {
        double somaReal = real + outro.real;
        double somaImaginario = imaginario + outro.imaginario;
        return NComplexo(somaReal, somaImaginario);
    }

    // Sobrecarga do operador de subtração
    NComplexo operator-(const NComplexo& outro) const {
        double subtracaoReal = real - outro.real;
        double subtracaoImaginario = imaginario - outro.imaginario;
        return NComplexo(subtracaoReal, subtracaoImaginario);
    }

    // Sobrecarga do operador de multiplicação
    NComplexo operator*(const NComplexo& outro) const {
        double multReal = real * outro.real - imaginario * outro.imaginario;
        double multImaginario = real * outro.imaginario + imaginario * outro.real;
        return NComplexo(multReal, multImaginario);
    }
};

int main() {
    // Criação de dois números complexos
    NComplexo num1(2.0, 3.0);
    NComplexo num2(1.0, -2.0);

    // Exibição dos números complexos
    std::cout << "Numero 1: " << num1.getReal() << " + " << num1.getImaginario() << "i" << std::endl;
    std::cout << "Numero 2: " << num2.getReal() << " + " << num2.getImaginario() << "i" << std::endl;

    // Cálculo do módulo e exibição
    std::cout << "Modulo do numero 1: " << num1.modulo() << std::endl;
    std::cout << "Modulo do numero 2: " << num2.modulo() << std::endl;

    // Cálculo do conjugado e exibição
    NComplexo conjugadoNum1 = num1.conjugado();
    NComplexo conjugadoNum2 = num2.conjugado();
    std::cout << "Conjugado do numero 1: " << conjugadoNum1.getReal() << " + " << conjugadoNum1.getImaginario() << "i" << std::endl;
    std::cout << "Conjugado do numero 2: " << conjugadoNum2.getReal() << " + " << conjugadoNum2.getImaginario() << "i" << std::endl;

    // Cálculo da soma, subtração e multiplicação
    NComplexo soma = num1 + num2;
    NComplexo subtracao = num1 - num2;
    NComplexo multiplicacao = num1 * num2;

    // Exibição dos resultados
    std::cout << "Soma: " << soma.getReal() << " + " << soma.getImaginario() << "i" << std::endl;
    std::cout << "Subtracao: " << subtracao.getReal() << " + " << subtracao.getImaginario() << "i" << std::endl;
    std::cout << "Multiplicacao: " << multiplicacao.getReal() << " + " << multiplicacao.getImaginario() << "i" << std::endl;

    return 0;
}
