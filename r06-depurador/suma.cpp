#include <iostream>

const int N =8; 
int suma(const int v[],int n); 

int main(){
    int datos[N]={3,1,4,1,5,9,2,6}; 
    std::cout<<"Suma: "<<suma(datos,N)<<'\n'; 
    return 0; 
}

int suma(const int v[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=v[i]; 
    } 
    return s; 
}