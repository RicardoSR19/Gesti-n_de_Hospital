#include "string.h"
using namespace std;

class Personal_transporte:Persona{ //Herencia con clase Persona
    private: //Atributos
        string vehiculo_asignado, licencia;
        int anios_exp;

    public: //Metodos
        Personal_transporte();
        Personal_transporte(string, string, int, string, string, string, int); //Constructor

        //Getters
        string getVehiculo();
        string getLicencia();
        int getAnios();

        //Super string de clase Personal_limpieza
        string getTransporteInfo();

        //Setters
        void setVehiculo(string);
        void setLicencia(string);
        void setAnios(int);
};
