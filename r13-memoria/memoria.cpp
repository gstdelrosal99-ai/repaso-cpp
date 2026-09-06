#include <iostream>
#include "arreglo.h"

int main(){
    Arreglo a(5); 
    a.set(0,42); 
    std::cout<<"A[0] = "<<a.get(0)<<std::endl; 

    Arreglo b = a; 
    std::cout<<"B[0] = "<<b.get(0)<<std::endl; 

    b.set(0,99); 

    std::cout<<"Despues de setear B:"<<std::endl; 
    std::cout<<"A[0] = "<<a.get(0)<<std::endl; 
    std::cout<<"B[0] = "<<b.get(0)<<std::endl; 

    return 0; 
}