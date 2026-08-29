#include <iostream>
#include <limits>
#include <string>

int leerEnRango(const std::string& msg,int lo,int hi);
void limpiarLinea(); 

int main(){
    std::cout<<leerEnRango("Rango 1 a 100: ", 1,100)<<std::endl; 
}

int leerEnRango(const std::string& msg,int lo,int hi){
    int n=0;

    while(true){
        std::cout<<msg; 
        bool ok=static_cast<bool>(std::cin>>n); 
        limpiarLinea(); 
        if((ok&&n>=lo)&&(n<=hi)){
            return n; 
        }
        std::cout<<"Escribe un entero entre "<<lo<<" y "<<hi<<"."<<std::endl; 
    }
    
}

void limpiarLinea(){
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); 
}