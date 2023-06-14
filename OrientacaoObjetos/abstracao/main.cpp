#include <iostream>

// Classe abstrata
class Animal {
public:
    virtual void emitirSom() = 0; // Método virtual puro
};

// Classe derivada
class Cachorro : public Animal {
public:
    void emitirSom() override {
        std::cout << "O cachorro late." << std::endl;
    }
};

// Classe derivada
class Gato : public Animal {
public:
    void emitirSom() override {
        std::cout << "O gato mia." << std::endl;
    }
};

int main() {
    Animal* animal1 = new Cachorro();
    Animal* animal2 = new Gato();

    animal1->emitirSom(); // Saída: O cachorro late.
    animal2->emitirSom(); // Saída: O gato mia.

    delete animal1;
    delete animal2;

    return 0;
}
