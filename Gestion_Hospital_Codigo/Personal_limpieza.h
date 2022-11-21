#include "string.h"
using namespace std;

class Personal_limpieza:Persona{ //Herencia con clase Persona
    private: //Atributos
        string cargo;
        int piso;

    public: //Métodos
        Personal_limpieza();
        Personal_limpieza(string, string, int, string, string, int); //Constructor

        //Getters
        string getCargo();
        int getPiso();

        //Super string de clase Personal_limpieza
        string getLimpiezaInfo();

        //Setters
        void setCargo(string);
        void setPiso(int);
};
