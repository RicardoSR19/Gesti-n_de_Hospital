//librerias y clases utilizadas
#include <windows.h>
#include <iostream>
#include "Persona.cpp"
#include "Personal_administracion.cpp"
#include "Personal_limpieza.cpp"
#include "Personal_transporte.cpp"
#include "Medico.cpp"
#include "Manejo_Archivo.h"

using namespace std;

int main(){
    //objetos hardcodeados
    Medico medico1("Mario Castellanos", "Hombre", 45, "442 093 4908","Neurocirujano", "Medico Responsable", 20, 2986427);
    Medico medico2("Fernanda Barrera", "Mujer", 32, "442 746 5332", "Cirujana General", "Medico Responsable", 7, 1786253);
    Paciente paciente1("Enrique Guzman", "Hombre", 37, "442 322 1359", "Bronquitis aguda", "Seguros Tec", 4205, 1401);
    Paciente paciente2("Ricardo Roa", "Hombre", 19, "442 088 1235", "Influenza tipo A", "Seguros Tec", 4301, 1138);
    Personal_administracion admin1("Roberto Perez", "Hombre", 29, "442 412 8976",  "Recepcionista", 4);
    Personal_administracion admin2("Alejandro Jaik", "Hombre", 28, "442 456 9243",  "Secretario", 2);
    Personal_limpieza limpieza1("Jose Olvera", "Hombre", 34, "442 403 1203", "Intendente", 3);
    Personal_limpieza limpieza2("Antonio Quintero", "Hombre", 38, "442 324 6789", "Especialista en esterilizacion de equipos", 4);
    Personal_transporte transporte1("Jimena Cuevas", "Mujer", 24, "442 132 1927", "Camioneta Mercedes", "A", 4);
    Personal_transporte transporte2("Valeria Jasso", "Mujer", 22, "442 098 9874", "Camioneta Volkswagen", "B", 2);

    string op;
    while(true){
        //Bienvenida e instrucciones
        cout<<"\n\tBienvenido a la base de datos del Hosipital"<<endl;
        cout<<"\n\t\t1) Registrar medico\n\t\t2) Registrar paciente\n\t\t3) Registrar personal de limpieza\n\t\t4) Registrar personal de administracion";
        cout<<"\n\t\t5) Registrar personal de transporte\n\t\t6) Crear copia de seguridad \n\t\t7) Salir del programa\n\n\t\tElegir opcion:";
        cin>>op;

        if(op=="1"){ //Opción Medicos
            system("cls");
            while(true){
                cout<<"\n\tPersonal medico\n";
                cout<<"\n\t\t1) Registrar\n\t\t2) Ver registros\n\t\t3) Asignar paciente a un medico\n\t\t4) Regresar al menu principal\n\n\t\tElegir opcion:";
                cin>>op;

                if(op=="1"){
                    //Registrar
                    system("cls");
                    cout<<"\n\tEn esta primer fase del programa las personas ya estan registradas ";
                    cout<<"\n\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");
                }else if(op=="2"){
                    //Ver registros
                    system("cls");
                    Medico medicos[10]={medico1, medico2};
                    cout<<"\n\tPersonal medico\n\n";
                    for(int i=0;i<10;i++){
                        if(medicos[i].getEspecialidad()==""){
                            continue;
                        }else{
                            cout<<medicos[i].getMedicoInfo()<<endl;
                        }
                    }
                    cout<<"\n\t\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");
                }else if(op=="3"){
                    //Agregar paciente(s)
                    system("cls");
                    medico2.agregarPaciente(paciente1, 0);
                    medico2.agregarPaciente(paciente2, 1);
                    cout<<"\n\tAl ser la primer fase del programa no es posible agregar pacientes de \n\tmanera manual, sin embargo se agregaron pacientes al segundo medico a manera de prueba.";
                    cout<<"\n\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");
                }else if(op=="4"){
                    //Salir
                    system("cls");
                    break;
                }else{
                    cout<<"\nOpcion invalida, prueba de nuevo"<<endl;
                    Sleep(800);
                    system("cls");
                }
            }

        }else if(op=="2"){ //Opción Pacientes
            system("cls");
            while(true){
                cout<<"\n\tPacientes\n";
                cout<<"\n\t\t1) Registrar\n\t\t2) Ver registros\n\t\t3) Regresar al menu principal\n\n\t\tElegir opcion:";
                cin>>op;
                if(op=="1"){
                    //Registros
                    system("cls");
                    cout<<"\n\tEn esta primer fase del programa las personas ya estan registradas ";
                    cout<<"\n\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");
                }else if(op=="2"){
                    //Ver registros
                    system("cls");
                    Paciente pacientes[10]={paciente1, paciente2};
                    cout<<"\n\tPacientes\n\n";
                    for(int i=0;i<10;i++){
                        if(pacientes[i].getEnfermedad()==""){
                            continue;
                        }else{
                            cout<<pacientes[i].getPacienteInfo()<<endl;
                        }
                    }
                    cout<<"\n\t\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");
                }else if(op=="3"){
                    //Salir
                    system("cls");
                    break;
                }else{
                    cout<<"\nOpcion invalida, prueba de nuevo"<<endl;
                    Sleep(800);
                    system("cls");
                }
            }

        }else if(op=="3"){ //Opción Personal de limpieza
            system("cls");
            while(true){
                cout<<"\n\tPersonal de limpieza\n";
                cout<<"\n\t\t1) Registrar\n\t\t2) Ver registros\n\t\t3) Regresar al menu principal\n\n\t\tElegir opcion:";
                cin>>op;
                if(op=="1"){
                    //Registros
                    system("cls");
                    cout<<"\n\tEn esta primer fase del programa las personas ya estan registradas ";
                    cout<<"\n\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");
                }else if(op=="2"){
                    //Ver registros
                    system("cls");
                    Personal_limpieza limpiezas[10]={limpieza1, limpieza2};
                    cout<<"\n\tPersonal de limpieza\n\n";
                    for(int i=0;i<10;i++){
                        if(limpiezas[i].getCargo()==""){
                            continue;
                        }else{
                            cout<<limpiezas[i].getLimpiezaInfo()<<endl;
                        }
                    }
                    cout<<"\n\t\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");
                }else if(op=="3"){
                    //Salir
                    system("cls");
                    break;
                }else{
                    cout<<"\nOpcion invalida, prueba de nuevo"<<endl;
                    Sleep(800);
                    system("cls");
                }
            }

        }else if(op=="4"){ //Opción Personal de administración
            system("cls");
            while(true){
                cout<<"\n\tPersonal de administracion\n";
                cout<<"\n\t\t1) Registrar\n\t\t2) Ver registros\n\t\t3) Regresar al menu principal\n\n\t\tElegir opcion:";
                cin>>op;
                if(op=="1"){
                    //Registros
                    system("cls");
                    cout<<"\n\tEn esta primer fase del programa las personas ya estan registradas ";
                    cout<<"\n\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");
                }else if(op=="2"){
                    //Ver registros
                    system("cls");
                    Personal_administracion admins[10]={admin1, admin2};
                    cout<<"\n\tPersonal de administracion\n\n";
                    for(int i=0;i<10;i++){
                        if(admins[i].getCargo()==""){
                            continue;
                        }else{
                            cout<<admins[i].getAdminInfo()<<endl;
                        }
                    }
                    cout<<"\n\t\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");
                }else if(op=="3"){
                    //Salir
                    system("cls");
                    break;
                }else{
                    cout<<"\nOpcion invalida, prueba de nuevo"<<endl;
                    Sleep(800);
                    system("cls");
                }
            }

        }else if(op=="5"){ //Opción Personal de transporte
            system("cls");
            while(true){
                cout<<"\n\tPersonal de transporte\n";
                cout<<"\n\t\t1) Registrar\n\t\t2) Ver registros\n\t\t3) Regresar al menu principal\n\n\t\tElegir opcion:";
                cin>>op;
                if(op=="1"){
                    //Registros
                    system("cls");
                    cout<<"\n\tEn esta primer fase del programa las personas ya estan registradas ";
                    cout<<"\n\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");
                }else if(op=="2"){
                    //Ver registros
                    system("cls");
                    Personal_transporte transportes[10]={transporte1, transporte2};
                    cout<<"\n\tPersonal de transporte\n\n";
                    for(int i=0;i<10;i++){
                        if(transportes[i].getLicencia()==""){
                            continue;
                        }else{
                            cout<<transportes[i].getTransporteInfo()<<endl;
                        }
                    }
                    cout<<"\n\t\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");
                }else if(op=="3"){
                    //Salir
                    system("cls");
                    break;
                }else{
                    cout<<"\nOpcion invalida, prueba de nuevo"<<endl;
                    Sleep(800);
                    system("cls");
                }
            }

        }else if(op=="6"){ //Opción crear copia de seguridad de la base de datos
            //Arreglos que se guardaran en la base de datos
            Paciente pacientes[10]={paciente1, paciente2};
            Personal_administracion admins[10]={admin1, admin2};
            Personal_limpieza limpiezas[10]={limpieza1, limpieza2};
            Personal_transporte transportes[10]={transporte1, transporte2};
            Medico medicos[10]={medico1, medico2};

            //Llamado de la función crear base de datos
            system("cls");
            guardarArchivo(pacientes, admins, limpiezas, transportes, medicos);
            cout<<"\n\t\tPulse una tecla para regresar";
            system("pause>pausaHospital");
            system("cls");

        }else if(op=="7"){ //Salir del programa
            system("cls");
            cout<<"Hasta luego"<<endl;
            break;

        }else{ //Mensaje cuando la opción no es válida
            cout<<"\nOpcion invalida, prueba de nuevo"<<endl;
            Sleep(800);
            system("cls");
        }
    }
    return 0;
}
