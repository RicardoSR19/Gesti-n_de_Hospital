#include "Personal_limpieza.h"
#include <sstream>

Personal_limpieza::Personal_limpieza(){ //Constructor Hardcodeado
    cargo="";
    piso=0;
}

Personal_limpieza::Personal_limpieza(string _nombre, string _genero, int _edad, string _contacto, string _cargo, int _piso):Persona(_nombre,_genero,_edad,_contacto){ //Constructor
    cargo=_cargo;
    piso=_piso;
}

//Setters
void Personal_limpieza::setCargo(string _cargo){
    cargo=_cargo;
}

void Personal_limpieza::setPiso(int _piso){
    piso=_piso;
}

//Getters
string Personal_limpieza::getCargo(){
    return cargo;
}

int Personal_limpieza::getPiso(){
    return piso;
}

//Super string de Personal_limpieza (contiene todos los datos de la clase Personal_limpieza)
string Personal_limpieza::getLimpiezaInfo(){
    stringstream aux;
    aux<<getPersonaInfo();
    aux<<"Cargo: "<<cargo<<endl;
    aux<<"Piso: "<<piso<<endl;
    return aux.str();
}
