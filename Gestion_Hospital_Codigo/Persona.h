#include "string.h"
using namespace std;

class Persona{
    private: //Atributos
        string nombre, genero, contacto;
        int edad;

    public: //Metodos
        Persona();
        Persona(string, string, int, string); //Constructor

        //Getters
        string getNombre();
        string getGenero();
        int getEdad();
        string getContacto();

        //Super string de clase Persona
        string getPersonaInfo();

        //Setters
        void setNombre(string);
        void setGenero(string);
        void setEdad(int);
        void setContacto(string);
};
