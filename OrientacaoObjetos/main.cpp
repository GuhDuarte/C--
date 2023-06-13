#include <iostream>
#include <string>

class Aviao{
public:
    int vel = 0, velMax, horasvoo;
    std::string tipo;
    void ini(int tp);
};

void Aviao::ini(int tp){
    if(tp==1){
        this->velMax = 800;
        this->tipo = "Jato";
        this->horasvoo = 3000;
    } else if(tp==2){
        this->velMax = 350;
        this->tipo = "Monomotor";
        this->horasvoo = 2700;
    } else if(tp==3){
        this->velMax=180;
        this->tipo = "Planador";
        this->horasvoo = 1500;
    }
}

int main(){
    int num;
    Aviao *av1 = new Aviao();

    do{
        std::cout << "\nEscolha um numero (1, 2 ou 3): ";
        std::cin >> num;
    }while(num!=1 && num!=2 && num!=3);

    av1->ini(num);

    std::cout << "\n";
    std::cout << "Velocidade maxima: " << av1->velMax << std::endl;
    std::cout << "Tipo do aviao: " << av1->tipo << std::endl;
    std::cout << "Horas voo: " << av1->horasvoo << std::endl;
    return 0;
}