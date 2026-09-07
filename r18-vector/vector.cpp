#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; 
    size_t capacidadAnterior = v.capacity(); 
    size_t reasignaciones = 0; 
    size_t copiados = 0; 

    std::cout<<"SIN RESERVE:"<<std::endl; 
    for(size_t i = 0; i<1000; i++){
        v.push_back(i); 
        if(v.capacity() != capacidadAnterior){
            std::cout<<"size = "<<v.size()<<std::endl; 
            std::cout<<"capacity = "<<v.capacity()<<std::endl; 
            reasignaciones++;
            copiados += capacidadAnterior; 
            capacidadAnterior = v.capacity(); 
        }
    }
    std::cout<<"Reasignaciones: "<<reasignaciones<<std::endl; 
    std::cout<<"Elementos Copiados: "<<copiados<<std::endl; 

    std::vector<int> w;
    w.reserve(1000); 
    size_t capacidadW = w.capacity(); 
    size_t reasignacionesW = 0; 
    
    std::cout<<"CON RESERVE:"<<std::endl; 
    std::cout<<"Capacidad Inicial = "<<w.capacity()<<std::endl; 
    for(size_t i =0; i<1000;i++){
        w.push_back(i); 
        if(w.capacity() != capacidadW){
            std::cout<<"size = "<<w.size()<<std::endl; 
            std::cout<<"capacity = "<<w.capacity()<<std::endl; 
            reasignacionesW++; 
            capacidadW = w.capacity(); 
        }
    }
    std::cout<<"Reasignaciones: "<<reasignacionesW<<std::endl;
     
    return 0; 
}