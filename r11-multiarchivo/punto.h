#ifndef PUNTO_H
#define PUNTO_H
class Punto{
    int x;
    int y; 
public: 
    Punto(); 
    Punto(int a); 
    Punto(int a,int b);
    int dameX() const; 
    int dameY() const; 
};
#endif