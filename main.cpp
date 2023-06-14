#include <iostream>
#include <vector>
#include "carro.h"

int main() {
    std::vector<int> numeros; 

    numeros.push_back(10); 
    numeros.push_back(20); 
    numeros.push_back(30); 

    std::cout << "Primeiro elemento: " << numeros[0] << std::endl; 
    std::cout << "Tamanho do vetor: " << numeros.size() << std::endl; 

    for (int numero : numeros)
    {
        std::cout << "O numero é: " << numero << std::endl;
    }
    
    for (int& numero : numeros) {
        numero *= 2; 
        std::cout << "O numero multiplicado é: " << numero << std::endl;
    }


    Carro meuCarro;

    meuCarro.setMarca("Lancer");
    meuCarro.setValor(250000);
    meuCarro.setCor("Prata");

    std::cout << "Marca do carro: " << meuCarro.getMarca() << std::endl;
    std::cout << "Valor do carro: " << meuCarro.getValor() << std::endl;
    std::cout << "Cor do carro: " << meuCarro.getCor() << std::endl;
    meuCarro.acelerar();

    return 0;
}
