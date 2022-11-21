#include "string.h"
#include "Paciente.cpp"

using namespace std;

class Medico:Persona{ //Herencia con clase Persona
    private: //Atributos
        Paciente pacientes[3];
        string especialidad, cargo;
        int anios_exp, cedula;

    public: //Métodos
        Medico();
        Medico(string, string, int, string, string, string, int, int); //Constructor

        //Getters
        string getEspecialidad();
        string getCargo();
        int getAnios();
        int getCedula();

        //Super string de clase Persona
        string getMedicoInfo();

        //Setters
        void setEspecialidad(string);
        void setCargo(string);
        void setAnios(int);
        void setCedula(int);

        //Relación de agregación con paciente
        void agregarPaciente(Paciente, int);
        string cantidadPacientes();
};
