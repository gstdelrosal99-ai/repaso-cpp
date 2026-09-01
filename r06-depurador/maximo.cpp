#include <iostream>

const int N = 8; 

int maximo(const int v[],int n); 

int main(){
    int datos[N] = {3,1,4,1,5,9,2,6}; 
    std::cout<<"Maximo: "<<maximo(datos,N)<<'\n'; 
    return 0; 
}

int maximo(const int v[],int n){
    int mejor=0; 
    for(int i=0;i<n;i++){
        if(v[i]>mejor){
            mejor = v[i];
        }
    }
    return mejor; 
}