#include "carro.h"
#include <iostream>

std::string Carro::getMarca() const {
    return marca;
}

double Carro::getValor() const {
    return valor;
}

std::string Carro::getCor() const {
    return cor;
}

void Carro::setMarca(const std::string& novaMarca) {
    marca = novaMarca;
}

void Carro::setValor(double novoValor) {
    valor = novoValor;
}

void Carro::setCor(const std::string& novaCor) {
    cor = novaCor;
}

void Carro::acelerar() {
    std::cout << "O carro está acelerando." << std::endl;
}

Carro::Carro() { }

Carro::~Carro() { }
