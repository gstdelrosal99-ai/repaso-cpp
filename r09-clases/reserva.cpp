#include <iostream> 
#include <string>

#define MIN_PERSONAS 0
#define MAX_PERSONAS 20 
#define MIN_HORA 0
#define MAX_HORA 23
class Reserva{
    std::string sala; 
    int personas; 
    int horaInicio; 
    int horaFin; 
public: 
    Reserva(){
        this->sala = "N/A"; 
        this->personas = 0; 
        this->horaInicio = 0; 
        this->horaFin = 23; 
    }
    Reserva(std::string sala,int personas,int horaInicio, int horaFin){
        if(!fijaSala(sala)){
            this->sala = "N/A";
        }
        if(!fijaPersonas(personas)){ 
            this->personas = 0; 
        }
        if(!fijaHorario(horaInicio,horaFin)){
            this->horaInicio = horaInicio;
            this->horaFin = horaFin; 
        }
 
    }
    bool fijaSala(std::string sala){
        if(!sala.empty()){
            this->sala = sala; 
            return true; 
        }
        else{
            return false;
        }
    }
    bool fijaPersonas(int personas){
        if(personas>MIN_PERSONAS&&personas<=MAX_PERSONAS){
            this->personas = personas;
            return true;  
        }
        else{
            return false; 
        }
    }
    bool fijaHorario(int horaInicio, int horaFin){
        if(horaInicio>=MIN_HORA && horaFin<=MAX_HORA && horaInicio<horaFin){
            this->horaInicio = horaInicio;
            this->horaFin = horaFin;
            return true; 
        }
        else{
            return false; 
        }
    }
    std::string dameSala() const{
        return sala; 
    }
    int damePersonas() const{
        return personas; 
    }
    int dameHoraInicio() const{
        return horaInicio; 
    }
    int dameHoraFin() const{
        return horaFin; 
    }
};

int main(){
    Reserva r("Sala de Juntas",15,9,11);
    
    std::cout<<"Sala: "<<r.dameSala()<<std::endl; 
    std::cout<<"Numero de Personas: "<<r.damePersonas()<<std::endl;
    std::cout<<"Hora de Inicio: "<<r.dameHoraInicio()<<":00"<<std::endl;
    std::cout<<"Hora de Finalizacion: "<<r.dameHoraFin()<<":00"<<std::endl;  
}