#include <iostream>

class Cuenta{
    double saldo; 
public: 
    Cuenta() : saldo(0){}
    void despositar(double monto);
};

int main(){
    Cuenta c; 
    c.despositar(100.0); 
    return 0; 
}