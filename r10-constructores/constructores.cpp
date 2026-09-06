#include <iostream>
#include <string> 

class Sesion{
    std::string nombre; 
public: 
    Sesion() : nombre("(Sin Nombre)"){
        std::cout<<"Construyendo: "<<nombre<<std::endl; 
    }
    Sesion(std::string nombre) : nombre(nombre){
        std::cout<<"Construyendo: "<<this->nombre<<std::endl; 
    }
    Sesion(std::string nombre, int n) : nombre(nombre){
        std::cout<<"Construyendo: "<<this->nombre<<" (n = "<<n<<")"<<std::endl; 
    }
    ~Sesion(){
        std::cout<<"Destruyendo: "<<nombre<<std::endl; 
    }
}; 

Sesion global("global");

int main(){
    Sesion a("a");
    {
        Sesion b("b"); 
        Sesion c("c",2); 
    }
    std::cout<<"--- medio ---\n"; 
    Sesion d; 
}