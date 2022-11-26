#include "Manejo_Archivo.h"

//Funcion para guardar la base de datos
void guardarArchivo(Paciente pacientes[], Personal_administracion admins[], Personal_limpieza limpiezas[], Personal_transporte transportes[], Medico medicos[]){
    ofstream baseDatos;
    baseDatos.open("Base de Datos Hospital.txt"); //Creacion del archivo
    baseDatos<<"\t\t\tBase de Datos Hospital\n";
    baseDatos<<"\tPaciente\n\n";
    for(int i=0;i<10;i++){ //Guardado de los personas tipo pacientes
        if(pacientes[i].getEnfermedad()==""){
            continue;
        }else{
            baseDatos<<pacientes[i].getPacienteInfo()<<"\n"<<endl;
        }
    }
    baseDatos<<"\n\tPersonal de administracion\n\n";
    for(int i=0;i<10;i++){ //Guardado del personal de administracion
        if(admins[i].getCargo()==""){
            continue;
        }else{
            baseDatos<<admins[i].getAdminInfo()<<"\n"<<endl;
        }
    }
    baseDatos<<"\n\tPersonal de limpieza\n\n";
    for(int i=0;i<10;i++){ //Guardado del personal de limpieza
        if(limpiezas[i].getCargo()==""){
            continue;
        }else{
            baseDatos<<limpiezas[i].getLimpiezaInfo()<<"\n"<<endl;
        }
    }
    baseDatos<<"\n\tPersonal de transporte\n\n";
    for(int i=0;i<10;i++){ //Guardado del personal de transporte
        if(transportes[i].getLicencia()==""){
            continue;
        }else{
            baseDatos<<transportes[i].getTransporteInfo()<<"\n"<<endl;
        }
    }
    baseDatos<<"\n\tPersonal medico\n\n";
    for(int i=0;i<10;i++){ //Guardado del personal medico
        if(medicos[i].getEspecialidad()==""){
            continue;
        }else{
            baseDatos<<medicos[i].getMedicoInfo()<<"\n"<<endl;
        }
    }
    baseDatos.close();
}
