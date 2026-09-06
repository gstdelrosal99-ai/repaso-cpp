#include <iostream>
#include <string>

class Persona{
    std::string nombre; 
public: 
    Persona(std::string nombre){
        this->nombre = nombre; 
        std::cout<<"Constructor Persona\n"; 
    }
    ~Persona(){
        std::cout<<"Destructor Persona\n"; 
    }
};

class Empleado : public Persona {
    double sueldo; 
public: 
    Empleado(std::string nombre, double sueldo) : Persona(nombre){
        this->sueldo = sueldo; 
        std::cout<<"Constructor Empleado\n";
    } 
    ~Empleado(){
        std::cout<<"Destructor Empleado\n"; 
    }
};

class Gerente : public Empleado{
    int equipo; 
public: 
    Gerente(std::string nombre, double sueldo, int equipo) : Empleado(nombre,sueldo){
        this->equipo = equipo; 
        std::cout<<"Constructor Gerente\n"; 
    }
    ~Gerente(){
        std::cout<<"Destructor Gerente\n";
    }
};

int main(){
    Gerente g("Ana", 10000, 5); 
    return 0; 
}