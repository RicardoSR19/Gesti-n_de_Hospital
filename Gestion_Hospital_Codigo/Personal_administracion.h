#include "string.h"
using namespace std;

class Personal_administracion:Persona{ //Herencia con clase Persona
    private: //Atributos
        string cargo;
        int piso;

    public: //Métodos
        Personal_administracion();
        Personal_administracion(string, string, int, string, string, int); //Constructor

        //Getters
        string getCargo();
        int getPiso();

        //Super string de clase Personal_administracion
        string getAdminInfo();

        //Setters
        void setCargo(string);
        void setPiso(int);
};
