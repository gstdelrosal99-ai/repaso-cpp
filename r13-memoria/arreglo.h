#ifndef ARREGLO_H
#define ARREGLO_H
#include <iostream>

class Arreglo{
    int* datos; 
    int n; 
public: 
    Arreglo(int n) : n(n > 0 ? n : 1){
        datos = new int[this->n]; 
        for(int i=0;i<this->n;i++){
            datos[i]=0; 
        }
        std::cout<<"Constructor: reservado en "<<datos<<std::endl; 
    }
    Arreglo(const Arreglo& otro) : n(otro.n){
        datos = new int[n];
        for(int i=0;i<n;i++){
            datos[i]=otro.datos[i]; 
        }
        std::cout<<"Constructor de copia: reservado en "<<datos<<" (copiado de "<<otro.datos<<")"<<std::endl; 
    }

    Arreglo& operator=(const Arreglo& otro){
        if(this == &otro) return *this;
        delete[] datos; 
        n = otro.n; 
        datos = new int[n]; 
        for(int i=0;i<n;i++){
            datos[i]=otro.datos[i]; 
        }
        std::cout<<"operator=: reservado en "<<datos<<" (copiado de "<<otro.datos<<")"<<std::endl; 
        return *this; 
    }
    
    ~Arreglo(){
        std::cout<<"Destructor: liberando "<<datos<<std::endl; 
        delete[] datos; 
    }

    void set(int i, int valor){
        datos[i] = valor; 
    }
    int get(int i) const{
        return datos[i];
    }
    int tam() const{
        return n; 
    }
};

#endif