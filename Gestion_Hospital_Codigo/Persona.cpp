#include "Persona.h"
#include <sstream>

Persona::Persona(){ //Constructor Hardcodeado
    nombre="";
    genero="";
    edad=0;
    contacto="";
}

Persona::Persona(string _nombre, string _genero, int _edad, string _contacto){ //Constructor
    nombre=_nombre;
    genero=_genero;
    edad=_edad;
    contacto=_contacto;
}

//Setters
void Persona::setNombre(string _nombre){
    nombre=_nombre;
}

void Persona::setGenero(string _genero){
    genero=_genero;
}

void Persona::setEdad(int _edad){
    edad=_edad;
}

void Persona::setContacto(string _contacto){
    contacto=_contacto;
}

//Getters
string Persona::getNombre(){
    return nombre;
}

string Persona::getGenero(){
    return genero;
}

int Persona::getEdad(){
    return edad;
}

string Persona::getContacto(){
    return contacto;
}

//Super string de Persona (contiene todos los datos de la clase Persona)
string Persona::getPersonaInfo(){
    stringstream aux;
    aux<<"Nombre: "<<nombre<<endl;
    aux<<"Genero: "<<genero<<endl;
    aux<<"Edad: "<<edad<<endl;
    aux<<"Contacto: "<<contacto<<endl;
    return aux.str();
}
