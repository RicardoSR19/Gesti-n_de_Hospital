#include "string.h"
#include <iostream>
#include <string>

using namespace std;

class Paciente:Persona{ //Herencia con clase Persona
    private: //Atributos
        string enfermedad, seguro_medico;
        int cuarto, id;

    public: //Metodos
        Paciente();
        Paciente(string, string, int, string, string, string, int, int); //Constructor

        //Getters
        string getEnfermedad();
        string getSeguro();
        int getCuarto();
        int getId();
        string nombrePaciente();

        //Super string de clase Paciente
        string getPacienteInfo();

        //Setters
        void setEnfermedad(string);
        void setSeguro(string);
        void setCuarto(int);
        void setId(int);
};
