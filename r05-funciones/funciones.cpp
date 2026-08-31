#include <iostream>
#include <string>
#define MAX_NOTAS 3 

double pedirNotas(double notas[]);
double calcularPromedio(double& sumaNotas);
std::string imprimirResultado(double promedio); 

int main(){
    double* notas = new double[MAX_NOTAS];
    double sumaNotas=0; 
    double promedio=0; 

    sumaNotas=pedirNotas(notas);
    promedio=calcularPromedio(sumaNotas); 
    std::cout<<imprimirResultado(promedio); 

    delete[] notas; 
    return 0; 
}

double calcularPromedio(double& sumaNotas){
    return sumaNotas/MAX_NOTAS; 
}

double pedirNotas(double notas[]){
    int suma=0; 
    for(int i=0;i<MAX_NOTAS;i++){
        std::cout<<"Nota "<<i+1<<": "; 
        std::cin>>notas[i];
        suma+=notas[i]; 
    }
    return suma; 
}

std::string imprimirResultado(double promedio){
    std::cout<<"Promedio: "<<promedio<<'\n'; 
    if(promedio>=70){ return "Aprobado\n"; }
    else{ return "Reprobado\n"; }
}