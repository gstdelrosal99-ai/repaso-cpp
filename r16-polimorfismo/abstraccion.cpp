#include <iostream>
#include <string>
#include <vector>

class Figura{
public: 
    virtual double area() const = 0; 
    virtual std::string nombre() const = 0; 
    virtual ~Figura(){}
};

class Circulo : public Figura{
    double radio; 
public: 
    Circulo(double radio){
        this->radio = radio; 
    }
    double area() const override {
        return 3.1416 * radio * radio; 
    }
    std::string nombre() const override {
        return "Circulo"; 
    }
};

class Rectangulo : public Figura{
    double ancho; 
    double largo; 
public: 
    Rectangulo(double largo, double ancho){
        this->largo=largo; 
        this->ancho=ancho; 
    }
    double area() const override {
        return largo * ancho; 
    }
    std::string nombre() const override {
        return "Rectangulo"; 
    }
};

int main(){
    std::vector<Figura*> figuras;
    figuras.push_back(new Circulo(2.0));
    figuras.push_back(new Rectangulo(3.0, 4.0));
    figuras.push_back(new Circulo(1.5));

    double total = 0;
    for(Figura* f : figuras){
        std::cout << f->nombre() << ": " << f->area() << std::endl;
        total += f->area();
    }
    std::cout << "Total: " << total << std::endl;

    for(Figura* f : figuras){
        delete f;
    }

    return 0;
}