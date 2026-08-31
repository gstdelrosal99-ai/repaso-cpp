#include <iostream>

const int N=5; 

int sumaTodo(int arr[]); 
int cuentaTodo(int arr[]); 
void imprimeTodo(int arr[]); 

int main(){
    int d[N]={10,20,30,40,50}; 
    
    std::cout<<sumaTodo(d)<<std::endl;
    std::cout<<cuentaTodo(d)<<std::endl; 
    imprimeTodo(d);  
    return 0; 
}

int sumaTodo(int arr[]){
    int suma=0; 
    for(int i=0;i<N;i++){
        suma+=arr[i];
    }
    return suma; 
}

int cuentaTodo(int arr[]){
    int cuantos=0; 
    for(int i=0;i<N;i++){
        if(arr[i]>25){ cuantos++; }
    }
    return cuantos; 
}

void imprimeTodo(int arr[]){
    int k=0; 
    while(k<N){ 
        std::cout<<arr[k]<<' ';
        k++; 
    }
    std::cout<<"\n";
}