#include <iostream>
#include <string> 

void intercambiarPorValor(int a,int b); 
void intercambiarPorPuntero(int* a,int* b); 
void intercambiarPorReferencia(int& a,int& b); 

int main(){
    int x= 1, y=2; 
    intercambiarPorValor(x,y); 
    std::cout<<"Resultado por valor: "<<std::endl;
    std::cout<<"x = "<<x<<std::endl; 
    std::cout<<"y = "<<y<<std::endl; 
    std::cout<<std::endl; 
    
    intercambiarPorPuntero(&x,&y); 
    std::cout<<"Resultado por Puntero: "<<std::endl; 
    std::cout<<"x = "<<x<<std::endl; 
    std::cout<<"y = "<<y<<std::endl; 
    std::cout<<std::endl; 

    intercambiarPorReferencia(x,y); 
    std::cout<<"Resultado por Referencia: "<<std::endl; 
    std::cout<<"x = "<<x<<std::endl; 
    std::cout<<"y = "<<y<<std::endl; 
    std::cout<<std::endl; 
    return 0; 
}

void intercambiarPorValor(int a,int b){
    int t = a; 
    a =  b; 
    b = t; 
}

void intercambiarPorPuntero(int* a,int* b){
    int t = *a; 
    *a = *b; 
    *b = t; 
}

void intercambiarPorReferencia(int& a,int& b){
    int t = a; 
    a = b; 
    b = t; 
}
