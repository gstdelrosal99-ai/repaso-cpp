#include <iostream>
#include <string> 
#include <vector> 

int contarPalabras(const std::string& s); 
std::string voltear(const std::string& s);

int main(){
    std::string s="Hola Mundo. Buen Dia";
    std::cout<<contarPalabras(s)<<std::endl;  
    std::cout<<voltear(s)<<std::endl; 
    return 0; 
}

int contarPalabras(const std::string& s){
    int cuentaPalabras=0; 
    bool dentroPalabra = false; 

    for(char c:s){
        if(c!=' '){
            if(!dentroPalabra){
                cuentaPalabras++; 
                dentroPalabra = true;
            }
        }
        else{
            dentroPalabra = false; 
        }
    }
    return cuentaPalabras; 
}

std::string voltear(const std::string& s){
    std::string palabraInvertida = ""; 
    for(int i = (int)s.size()-1;i>=0;i--){
        palabraInvertida += s[i]; 
    }
    return palabraInvertida; 
}