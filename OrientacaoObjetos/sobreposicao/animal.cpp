#include <iostream>

class Animal {
public:
    virtual void emitirSom() {
        std::cout << "O animal emite um som." << std::endl;
    }
};

class Cachorro : public Animal {
public:
    void emitirSom() override {
        std::cout << "O cachorro late." << std::endl;
    }
};

int main() {
    Animal* animal = new Cachorro();

    animal->emitirSom(); // Saída: O cachorro late.

    delete animal;

    return 0;
}
