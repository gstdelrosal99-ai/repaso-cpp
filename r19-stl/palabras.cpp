#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

int main(){
    std::vector<std::string> palabras = {"Hola","Mundo","Hola","Adios","Mundo","Mundo"}; 

    std::cout<<"CON VECTOR"<<std::endl; 
    std::vector<std::string> vistas; 
    std::vector<int> conteos; 

    for(const std::string&p : palabras){
        int pos = -1; 
        for(int i = 0; i<(int)vistas.size(); i++){
            if(vistas[i] == p){
                pos = i; 
                break; 
            }
        }
        if(pos == -1){
            vistas.push_back(p);
            conteos.push_back(1); 
        }
        else{
            conteos[pos]++; 
        }
    }
    for(int i=0; i<(int)vistas.size(); i++){
        std::cout<<vistas[i]<<": "<<conteos[i]<<std::endl; 
    }

    std::cout<<"\nCON MAP"<< std::endl;
    std::map<std::string, int> conteo;
    for(const std::string& p : palabras){
        conteo[p]++;
    }
    for(const auto& par : conteo){
        std::cout << par.first << ": " << par.second << std::endl;
    }

    std::cout<<"\nCON SET"<< std::endl;
    std::set<std::string>unicas(palabras.begin(), palabras.end());
    for(const std::string& u : unicas){
        int c = 0;
        for(const std::string& p : palabras){
            if(p == u) c++;
        }
        std::cout << u << ": " << c << std::endl;
    }

    return 0;    
}