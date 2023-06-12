#include <iostream>

// Classe base
class Animal {
public:
    virtual void fazerSom() {
        std::cout << "O animal faz um som." << std::endl;
    }
};

// Classe derivada
class Cachorro : public Animal {
public:
    void fazerSom() override {
        std::cout << "O cachorro late." << std::endl;
    }
};

// Função genérica que recebe um objeto da classe base e chama o método fazerSom()
void emitirSom(Animal* animal) {
    animal->fazerSom();
}

int main() {
    Animal animal;
    Cachorro cachorro;

    emitirSom(&animal);    // Chamada de função com objeto da classe base
    emitirSom(&cachorro);  // Chamada de função com objeto da classe derivada

    return 0;
}
