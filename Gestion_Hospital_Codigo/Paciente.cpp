#include "Paciente.h"
#include <sstream>

Paciente::Paciente(){ //Constructor Hardcodeado
    enfermedad="";
    seguro_medico="";
    cuarto=0;
    id=0;
}

Paciente::Paciente(string _nombre, string _genero, int _edad, string _contacto, string _enfermedad, string _seguro_medico, int _cuarto, int _id):Persona(_nombre,_genero,_edad,_contacto){ //Constructor
    enfermedad=_enfermedad;
    seguro_medico=_seguro_medico;
    cuarto=_cuarto;
    id=_id;
}

//Setters
void Paciente::setEnfermedad(string _enfermedad){
    enfermedad=_enfermedad;
}

void Paciente::setSeguro(string _seguro_medico){
    seguro_medico=_seguro_medico;
}

void Paciente::setCuarto(int _cuarto){
    cuarto=_cuarto;
}

void Paciente::setId(int _id){
    id=_id;
}

//Getters
string Paciente::getEnfermedad(){
    return enfermedad;
}

string Paciente::getSeguro(){
    return seguro_medico;
}

int Paciente::getCuarto(){
    return cuarto;
}

int Paciente::getId(){
    return id;
}

string Paciente::nombrePaciente(){
    string aux;
    aux = getNombre();
    return aux;
}

//Super string de Paciente (contiene todos los datos de la clase Paciente)
string Paciente::getPacienteInfo(){
    stringstream aux;
    aux<<getPersonaInfo();
    aux<<"Enfermedad: "<<enfermedad<<endl;
    aux<<"Seguro medico: "<<seguro_medico<<endl;
    aux<<"Cuarto: "<<cuarto<<endl;
    aux<<"ID: "<<id<<endl;
    return aux.str();
}
