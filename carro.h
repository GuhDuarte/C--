#ifndef CARRO_H
#define CARRO_H

#include <string>

class Carro
{
private:
    std::string marca;
    double valor;
    std::string cor;
    
public:
    std::string getMarca() const;
    double getValor() const;
    std::string getCor() const;
    
    void setMarca(const std::string& novaMarca);
    void setValor(double novoValor);
    void setCor(const std::string& novaCor);
    
    void acelerar();
    
    Carro();
    ~Carro();
};

#endif
