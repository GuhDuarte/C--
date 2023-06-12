#include <iostream>

// Classe base
class Animal {
public:
    void comer() {
        std::cout << "O animal esta comendo." << std::endl;
    }
};

// Classe derivada
class Cachorro : public Animal {
public:
    void latir() {
        std::cout << "O cachorro esta latindo." << std::endl;
    }
};

int main() {
    Cachorro cachorro;
    cachorro.comer();  // Chamada de método da classe base
    cachorro.latir();  // Chamada de método da classe derivada

    return 0;
}
