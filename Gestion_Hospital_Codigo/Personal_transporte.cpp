#include "Personal_transporte.h"
#include <sstream>

Personal_transporte::Personal_transporte(){ //Constructor Hardcodeado
    vehiculo_asignado="";
    licencia="";
    anios_exp=0;
}

Personal_transporte::Personal_transporte(string _nombre, string _genero, int _edad, string _contacto, string _vehiculo_asignado, string _licencia, int _anios_exp):Persona(_nombre,_genero,_edad,_contacto){ //Constructor Hardcodeado
    vehiculo_asignado=_vehiculo_asignado;
    licencia=_licencia;
    anios_exp=_anios_exp;
}

//Setters
void Personal_transporte::setVehiculo(string _vehiculo_asignado){
    vehiculo_asignado=_vehiculo_asignado;
}

void Personal_transporte::setLicencia(string _licencia){
    licencia=_licencia;
}

void Personal_transporte::setAnios(int _anios_exp){
    anios_exp=_anios_exp;
}

//Getters
string Personal_transporte::getVehiculo(){
    return vehiculo_asignado;
}

string Personal_transporte::getLicencia(){
    return licencia;
}

int Personal_transporte::getAnios(){
    return anios_exp;
}

//Super string de Personal_transporte (contiene todos los datos de la clase Personal_transporte)
string Personal_transporte::getTransporteInfo(){
    stringstream aux;
    aux<<getPersonaInfo();
    aux<<"Vehiculo: "<<vehiculo_asignado<<endl;
    aux<<"Tipo de licencia: "<<licencia<<endl;
    aux<<"Anios de experiencia: "<<anios_exp<<endl;
    return aux.str();
}
