#include <iostream>
#include <vector>
#include "carro.h"

int main() {
    std::vector<int> numeros; // Cria um vetor vazio

    numeros.push_back(10); // Adiciona o elemento 10 ao final do vetor
    numeros.push_back(20); // Adiciona o elemento 20 ao final do vetor
    numeros.push_back(30); // Adiciona o elemento 30 ao final do vetor

    // Acesso aos elementos do vetor
    std::cout << "Primeiro elemento: " << numeros[0] << std::endl; // Imprime 10
    std::cout << "Tamanho do vetor: " << numeros.size() << std::endl; // Imprime 3

    for (int numero : numeros)
    {
        std::cout << "O numero é: " << numero << std::endl;
    }
    
    for (int& numero : numeros) {
        numero *= 2; 
        std::cout << "O numero multiplicado é: " << numero << std::endl;
    }

    Carro meuCarro;

    meuCarro.setMarca("Toyota");
    meuCarro.setValor(25000.0);
    meuCarro.setCor("Prata");

    std::cout << "Marca do carro: " << meuCarro.getMarca() << std::endl;
    std::cout << "Valor do carro: " << meuCarro.getValor() << std::endl;
    std::cout << "Cor do carro: " << meuCarro.getCor() << std::endl;
    meuCarro.acelerar();



    return 0;
}
