#include <iostream>
#include <string>
#include "arreglo.hpp"

int main(){
    Arreglo<double> a(2);
    a[0] = 1.99;  

    Arreglo<double> b = a; 
    std::cout<<"b[0] = "<<b[0]<<std::endl; 
    b[0] = 99.99; 

    std::cout<<"a[0] = "<<a[0]<<std::endl; 
    std::cout<<"b[0] = "<<b[0]<<std::endl; 

    Arreglo<std::string> s(3); 
    s[0] = "Hola"; 

    Arreglo<std::string> t = s; 
    std::cout<<"t[0] = "<<t[0]<<std::endl; 
    t[0] = "Adios"; 

    std::cout<<"s[0] = "<<s[0]<<std::endl; 
    std::cout<<"t[0] = "<<t[0]<<std::endl; 

}
