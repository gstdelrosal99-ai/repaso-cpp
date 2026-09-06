#include <iostream>

class Fraccion{
    int num_; 
    int den_; 

    void reducir(){
        if(den_<0){
            num_ = -num_;
            den_ = -den_;  
        }
        int a = num_ < 0 ? -num_:num_; 
        int b = den_; 
        while(b!=0){
            int t = b; 
            b = a % b; 
            a = t; 
        }
        if(a!=0){
            num_/=a; 
            den_/=a; 
        }
    }
public:
    Fraccion(int n=0,int d=1) : num_(n), den_(d){
        reducir(); 
    }

    Fraccion operator+(const Fraccion& otro) const{
        return Fraccion(num_* otro.den_ + otro.num_ * den_, den_* otro.den_); 
    }

    Fraccion operator*(const Fraccion& otro) const{
        return Fraccion(num_ * otro.num_, den_ * otro.den_); 
    }

    Fraccion operator==(const Fraccion& otro) const{
        return num_ * otro.den_ == otro.num_ * den_; 
    }

    Fraccion operator<(const Fraccion& otro) const{
        return num_ * otro.den_ < otro.num_ * den_; 
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraccion& f);
};

std::ostream& operator<<(std::ostream& os, const Fraccion& f){
    return os<<f.num_<<'/'<<f.den_; 
}

int main(){
    std::cout<<Fraccion(1,2) + Fraccion(1,3)<<std::endl; 
    std::cout<<Fraccion(6,-8)<<std::endl; 
}