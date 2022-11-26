#include "Medico.h"
#include <sstream>

using namespace std;

Medico::Medico(){ //Constructor Hardcodeado
    especialidad="";
    cargo="";
    anios_exp=0;
    cedula=0;
}

Medico::Medico(string _nombre, string _genero, int _edad, string _contacto, string _especialidad, string _cargo, int _anios_exp, int _cedula):Persona(_nombre,_genero,_edad,_contacto){ //Constructor
    especialidad=_especialidad;
    cargo=_cargo;
    anios_exp=_anios_exp;
    cedula=_cedula;
}

//Setters
void Medico::setEspecialidad(string _especialidad){
    especialidad=_especialidad;
}

void Medico::setCargo(string _cargo){
    cargo=_cargo;
}

void Medico::setAnios(int _anios_exp){
    anios_exp=_anios_exp;
}

void Medico::setCedula(int _cedula){
    cedula=_cedula;
}

//Getters
string Medico::getEspecialidad(){
    return especialidad;
}

string Medico::getCargo(){
    return cargo;
}

int Medico::getAnios(){
    return anios_exp;
}

int Medico::getCedula(){
    return cedula;
}

string Medico::nombreMedico(){
    string aux;
    aux = getNombre();
    return aux;
}

//Relacion de agregacion con la clase Paciente
void Medico::agregarPaciente(Paciente paciente, int posicion){
    pacientes[posicion]=paciente;
}

//Funcion para imprimir los pacientes asignados
string Medico::cantidadPacientes(){
    stringstream aux;
    for(int i = 0 ; i <3; i++){
        if (pacientes[i].nombrePaciente()==""){
            aux<<"Paciente "<<i+1<<": Sin Asignar"<<endl;
        }else{
            aux<<"Paciente "<<i+1<<": "<<pacientes[i].nombrePaciente()<<endl;
        }
    }
    return aux.str();
}

//Super string de Medico (contiene todos los datos de la clase Medico)
string Medico::getMedicoInfo(){
    stringstream aux;
    aux<<getPersonaInfo();
    aux<<"Especialidad: "<<especialidad<<endl;
    aux<<"Cargo: "<<cargo<<endl;
    aux<<"Anios de experiencia: "<<anios_exp<<endl;
    aux<<"Cedula: "<<cedula<<endl;
    aux<<cantidadPacientes();
    return aux.str();
}
