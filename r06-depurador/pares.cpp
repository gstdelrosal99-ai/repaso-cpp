#include <iostream>

const int N =8; 

int pares(const int v[],int n);

int main(){
    int datos[N] = {3,1,4,1,5,9,2,6};
    std::cout<<"Pares: "<<pares(datos,N)<<'\n'; 
    return 0; 
}

int pares(const int v[], int n){
    int c=0; 
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            c++;
        }
    }
    return c; 
}