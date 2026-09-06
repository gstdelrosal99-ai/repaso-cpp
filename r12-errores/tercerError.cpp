#include <iostream>
#include <string>

void mostrar(int n){
    std::cout<<n<<std::endl; 
}

int main(){
    mostrar(std::string("hola")); 
    return 0; 
}