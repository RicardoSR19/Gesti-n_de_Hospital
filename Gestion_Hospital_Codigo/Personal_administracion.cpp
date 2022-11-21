#include "Personal_administracion.h"
#include <sstream>

Personal_administracion::Personal_administracion(){ //Constructor Hardcodeado
    cargo="";
    piso=0;
}

Personal_administracion::Personal_administracion(string _nombre, string _genero, int _edad, string _contacto, string _cargo, int _piso):Persona(_nombre,_genero,_edad,_contacto){ //Constructor
    cargo=_cargo;
    piso=_piso;
}

//Setters
void Personal_administracion::setCargo(string _cargo){
    cargo=_cargo;
}

void Personal_administracion::setPiso(int _piso){
    piso=_piso;
}

//Getters
string Personal_administracion::getCargo(){
    return cargo;
}

int Personal_administracion::getPiso(){
    return piso;
}

//Super string de Personal_administracion (contiene todos los datos de la clase Personal_administracion)
string Personal_administracion::getAdminInfo(){
    stringstream aux;
    aux<<getPersonaInfo();
    aux<<"Cargo: "<<cargo<<endl;
    aux<<"Piso: "<<piso<<endl;
    return aux.str();
}
