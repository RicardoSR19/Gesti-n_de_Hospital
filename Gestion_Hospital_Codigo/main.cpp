//librerias y clases utilizadas
#include <windows.h>
#include <iostream>
#include "Persona.cpp"
#include "Personal_administracion.cpp"
#include "Personal_limpieza.cpp"
#include "Personal_transporte.cpp"
#include "Medico.cpp"
#include "Manejo_Archivo.cpp"

using namespace std;

void titulo(string title){ //Funcion para crear titulos
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int tam;
    tam=title.length();
    tam+=77;
    SetConsoleTextAttribute(hConsole, 241); //Color azul letras
    for(int i=0; i<tam; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=0; i<tam; i++){
        cout<<" ";
        if(i==38){
            cout<<title;
        }
    }
    cout<<"\n";
    for(int i=0; i<tam; i++){
        cout<<"*";
    }
    SetConsoleTextAttribute(hConsole, 240); //Color negro letras
}

int main(){
    //Color de la consola
    system("color F0");

    //objetos hardcodeados
    Medico medico1("Mario Castellanos", "Hombre", 45, "442 093 4908","Neurocirujano", "Medico Responsable", 20, 2986427);
    Medico medico2("Fernanda Barrera", "Mujer", 32, "442 746 5332", "Cirujana General", "Medico Responsable", 7, 1786253);
    Medico medico3("Jimena Trejo", "Mujer", 40, "442 534 1723", "Cardiologa", "Medico Responsable", 15, 3795241);
    Medico medico4, medico5, medico6, medico7, medico8, medico9, medico10;

    Paciente paciente1("Enrique Guzman", "Hombre", 37, "442 322 1359", "Bronquitis aguda", "Seguros Tec", 4205, 1401);
    Paciente paciente2("Ricardo Roa", "Hombre", 19, "442 088 1235", "Influenza tipo A", "Seguros Tec", 4301, 1138);
    Paciente paciente3("Guillermo Galindo", "Hombre", 45, "442 908 3218", "Hipertensión arterial", "Seguros Tec", 4302, 1020);
    Paciente paciente4, paciente5, paciente6, paciente7, paciente8, paciente9, paciente10;

    Personal_limpieza limpieza1("Jose Olvera", "Hombre", 34, "442 403 1203", "Intendente", 3);
    Personal_limpieza limpieza2("Antonio Quintero", "Hombre", 38, "442 324 6789", "Especialista en esterilizacion de equipos", 4);
    Personal_limpieza limpieza3("Raul Molina", "Hombre", 48, "442 132 1324", "Intendente", 5);
    Personal_limpieza limpieza4, limpieza5, limpieza6, limpieza7, limpieza8, limpieza9, limpieza10;

    Personal_administracion admin1("Roberto Perez", "Hombre", 29, "442 412 8976",  "Recepcionista", 4);
    Personal_administracion admin2("Alejandro Jaik", "Hombre", 28, "442 456 9243",  "Secretario", 2);
    Personal_administracion admin3("Alexa Martinez", "Mujer", 35, "442 021 5647",  "Office Manager", 10);
    Personal_administracion admin4, admin5, admin6, admin7, admin8, admin9, admin10;

    Personal_transporte transporte1("Jimena Cuevas", "Mujer", 24, "442 132 1927", "Camioneta Mercedes", "A", 4);
    Personal_transporte transporte2("Valeria Jasso", "Mujer", 22, "442 098 9874", "Camioneta Volkswagen", "B", 2);
    Personal_transporte transporte3("Rafael Gonzales", "Hombre", 28, "442 432 7896", "Camioneta Nissan", "B", 8);
    Personal_transporte transporte4, transporte5, transporte6, transporte7, transporte8, transporte9, transporte10;

    //Definir arreglos de objetos a utilizar
    Medico medicos[10]={medico1, medico2, medico3, medico4, medico5, medico6, medico7, medico8, medico9, medico10};
    Paciente pacientes[10]={paciente1, paciente2, paciente3, paciente4, paciente5, paciente6, paciente7, paciente8, paciente9, paciente10};
    Personal_limpieza limpiezas[10]={limpieza1, limpieza2, limpieza3, limpieza4, limpieza5, limpieza6, limpieza7, limpieza8, limpieza9, limpieza10};
    Personal_administracion admins[10]={admin1, admin2, admin3, admin4, admin5, admin6, admin7, admin8, admin9, admin10};
    Personal_transporte transportes[10]={transporte1, transporte2, transporte3, transporte4, transporte5, transporte6, transporte7, transporte8, transporte9, transporte10};

    string op;
    system("cls");
    while(true){
        //Bienvenida e instrucciones
        cout<<"\n";
        titulo("Bienvenido a la base de datos del Hosipital");
        //cout<<"\n\tBienvenido a la base de datos del Hosipital"<<endl;
        cout<<"\n\n\t\t\t1) Medicos\n\t\t\t2) Pacientes\n\t\t\t3) Personal de limpieza\n\t\t\t4) Personal de administracion";
        cout<<"\n\t\t\t5) Personal de transporte\n\t\t\t6) Crear copia de seguridad \n\t\t\t7) Salir del programa\n\n\t\t\tElegir opcion: ";
        cin>>op;

        if(op=="1"){ //Opci�n Medicos
            system("cls");
            while(true){
                cout<<"\n";
                titulo("Personal medico");
                cout<<"\n\n\t\t\t1) Registrar\n\t\t\t2) Ver registros\n\t\t\t3) Asignar paciente a un medico\n\t\t\t4) Regresar al menu principal\n\n\t\t\tElegir opcion: ";
                cin>>op;

                if(op=="1"){
                    //Registrar
                    system("cls");
                    string nombre, genero, contacto, especialidad, cargo;
                    int anios_exp, cedula, edad, num;
                    Medico med;
                    for(int i=0;i<10;i++){
                        if(medicos[i].getEspecialidad()==""){
                            num=i;
                            break;
                        }
                    }
                    if(medicos[9].getEspecialidad()!=""){
                        system("cls");
                        cout<<"\n\n\t\tBase de datos de los medicos llena, cerrar programa para reiniciar";
                    }else{
                        cout<<"\n\tIngresa los siguientes datos para completar el perfil\n"<<endl;
                        getline(cin,nombre);
                        cout<<"\t\tNombre: ";
                        getline(cin,nombre);
                        cout<<"\t\tGenero: ";cin>>genero;
                        cout<<"\t\tEdad: ";cin>>edad;
                        getline(cin,contacto);
                        cout<<"\t\tContacto: ";
                        getline(cin,contacto);
                        cout<<"\t\tEspecialidad: ";cin>>especialidad;
                        getline(cin,cargo);
                        cout<<"\t\tCargo: ";
                        getline(cin,cargo);
                        cout<<"\t\tAnios de experiencia: ";cin>>anios_exp;
                        cout<<"\t\tCedula: ";cin>>cedula;
                        Medico med(nombre, genero, edad, contacto, especialidad, cargo, anios_exp, cedula);
                        medicos[num]=med;
                        cout<<"\n\tPulse una tecla para regresar";
                        system("pause>pausaHospital");
                        system("cls");
                    }

                }else if(op=="2"){
                    //Ver registros
                    system("cls");
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
                    int numM, numP, pos, maxM, maxP;
                    system("cls");

                    //Mostrar Medicos
                    cout<<"\n\tSelecciona al medico que se le asignara un paciente\n"<<endl;
                    for(int i=0;i<10;i++){
                        if(medicos[i].nombreMedico()==""){
                            maxM=i;
                            break;
                        }else{
                            cout<<"\t\t"<<i+1<<") "<<medicos[i].nombreMedico()<<endl;
                        }
                    }
                    cout<<"\n\t\tEscribe el numero del medico: ";cin>>numM;

                    //Opcion invalida
                    while(numM>maxM || numM<=0){
                        cout<<"\n\t\t\t\t\t\tOpcion invalida, prueba de nuevo"<<endl;
                        Sleep(800);
                        system("cls");
                        cout<<"\n\tSelecciona al medico que se le asignara un paciente\n"<<endl;
                        for(int i=0;i<10;i++){
                            if(medicos[i].nombreMedico()==""){
                                maxM=i;
                                break;
                            }else{
                                cout<<"\t\t"<<i+1<<") "<<medicos[i].nombreMedico()<<endl;
                            }
                        }
                        cout<<"\n\t\tEscribe el numero del medico: ";cin>>numM;
                    }

                    //Mostrar Pacientes
                    system("cls");
                    cout<<"\n\tAhora elije el paciente que se le asignara\n"<<endl;
                    for(int i=0;i<10;i++){
                        if(pacientes[i].nombrePaciente()==""){
                            maxP=i;
                            break;
                        }else{
                            cout<<"\t\t"<<i+1<<") "<<pacientes[i].nombrePaciente()<<endl;
                        }
                    }
                    cout<<"\n\t\tEscribe el numero del paciente: ";cin>>numP;

                    //Opcion invalida
                    while(numP>maxP || numP<=0){
                        cout<<"\n\t\t\t\t\t\tOpcion invalida, prueba de nuevo"<<endl;
                        Sleep(800);
                        system("cls");
                        cout<<"\n\tAhora elije el paciente que se le asignara\n"<<endl;
                        for(int i=0;i<10;i++){
                            if(pacientes[i].nombrePaciente()==""){
                                maxP=i;
                                break;
                            }else{
                                cout<<"\t\t"<<i+1<<") "<<pacientes[i].nombrePaciente()<<endl;
                            }
                        }
                        cout<<"\n\t\tEscribe el numero del paciente: ";cin>>numP;
                    }

                    //Indicar posicion de asignacion
                    system("cls");
                    cout<<"\n\tIndicar la posicion donde se asignara el paciente \n\n\t\tNota: La posicion puede ser del 1 al 3"<<endl;
                    cout<<"\t\tEscribe la posicion donde se agregara el pacienete: ";cin>>pos;

                    //Opcion invalida
                    while(pos<1 || pos>3){
                        cout<<"\n\t\t\t\t\t\tOpcion invalida, prueba de nuevo"<<endl;
                        Sleep(800);
                        system("cls");
                        cout<<"\n\tIndicar la posicion donde se asignara el paciente \n\n\t\tNota: La posicion puede ser del 1 al 3"<<endl;
                        cout<<"\t\tEscribe la posicion donde se agregara el pacienete: ";cin>>pos;
                    }

                    medicos[numM-1].agregarPaciente(pacientes[numP-1], pos-1);
                    cout<<"\n\t\tAsignacion finalizada";
                    cout<<"\n\t\tPulse una tecla para regresar";
                    system("pause>pausaHospital");
                    system("cls");

                }else if(op=="4"){
                    //Salir
                    system("cls");
                    break;
                }else{
                    cout<<"\n\t\t\t\t\t\tOpcion invalida, prueba de nuevo"<<endl;
                    Sleep(800);
                    system("cls");
                }
            }

        }else if(op=="2"){ //Opcion Pacientes
            system("cls");
            while(true){
                cout<<"\n";
                titulo("Pacientes");
                cout<<"\n\n\t\t\t1) Registrar\n\t\t\t2) Ver registros\n\t\t\t3) Regresar al menu principal\n\n\t\t\tElegir opcion: ";
                cin>>op;
                if(op=="1"){
                    //Registrar
                    system("cls");
                    string nombre, genero, contacto, enfermedad, seguro_medico;
                    int edad, cuarto, id, num;
                    Paciente pac;
                    for(int i=0;i<10;i++){
                        if(pacientes[i].getEnfermedad()==""){
                            num=i;
                            break;
                        }
                    }
                    if(pacientes[9].getEnfermedad()!=""){
                        system("cls");
                        cout<<"\n\n\t\tBase de datos de los pacientes llena, cerrar programa para reiniciar";
                    }else{
                        cout<<"\n\tIngresa los siguientes datos para completar el perfil\n"<<endl;
                        getline(cin,nombre);
                        cout<<"\t\tNombre: ";
                        getline(cin,nombre);
                        cout<<"\t\tGenero: ";cin>>genero;
                        cout<<"\t\tEdad: ";cin>>edad;
                        getline(cin,contacto);
                        cout<<"\t\tContacto: ";
                        getline(cin,contacto);
                        cout<<"\t\tEnfermedad: ";
                        getline(cin,enfermedad);
                        cout<<"\t\tSeguro medico: ";
                        getline(cin,seguro_medico);
                        cout<<"\t\tCuarto: ";cin>>cuarto;
                        cout<<"\t\tID: ";cin>>id;
                        Paciente pac(nombre, genero, edad, contacto, enfermedad, seguro_medico, cuarto, id);
                        pacientes[num]=pac;
                        cout<<"\n\tPulse una tecla para regresar";
                        system("pause>pausaHospital");
                        system("cls");
                    }

                }else if(op=="2"){
                    //Ver registros
                    system("cls");
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
                    cout<<"\n\t\t\t\t\t\tOpcion invalida, prueba de nuevo"<<endl;
                    Sleep(800);
                    system("cls");
                }
            }

        }else if(op=="3"){ //Opcion Personal de limpieza
            system("cls");
            while(true){
                cout<<"\n";
                titulo("Personal de limpieza");
                cout<<"\n\n\t\t\t1) Registrar\n\t\t\t2) Ver registros\n\t\t\t3) Regresar al menu principal\n\n\t\t\tElegir opcion: ";
                cin>>op;
                if(op=="1"){
                    //Registrar
                    system("cls");
                    string nombre, genero, contacto, cargo;
                    int edad, piso, num;
                    Personal_limpieza lim;
                    for(int i=0;i<10;i++){
                        if(limpiezas[i].getCargo()==""){
                            num=i;
                            break;
                        }
                    }
                    if(limpiezas[9].getCargo()!=""){
                        system("cls");
                        cout<<"\n\n\t\tBase de datos del personal de limpieza llena, cerrar programa para reiniciar";
                    }else{
                        cout<<"\n\tIngresa los siguientes datos para completar el perfil\n"<<endl;
                        getline(cin,nombre);
                        cout<<"\t\tNombre: ";
                        getline(cin,nombre);
                        cout<<"\t\tGenero: ";cin>>genero;
                        cout<<"\t\tEdad: ";cin>>edad;
                        getline(cin,contacto);
                        cout<<"\t\tContacto: ";
                        getline(cin,contacto);
                        cout<<"\t\tCargo: ";
                        getline(cin,cargo);
                        cout<<"\t\tPiso: ";cin>>piso;
                        Personal_limpieza lim(nombre, genero, edad, contacto, cargo, piso);
                        limpiezas[num]=lim;
                        cout<<"\n\tPulse una tecla para regresar";
                        system("pause>pausaHospital");
                        system("cls");
                    }
                }else if(op=="2"){
                    //Ver registros
                    system("cls");
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
                    cout<<"\n\t\t\t\t\t\tOpcion invalida, prueba de nuevo"<<endl;
                    Sleep(800);
                    system("cls");
                }
            }

        }else if(op=="4"){ //Opcion Personal de administracion
            system("cls");
            while(true){
                cout<<"\n";
                titulo("Personal de administracion");
                cout<<"\n\n\t\t\t1) Registrar\n\t\t\t2) Ver registros\n\t\t\t3) Regresar al menu principal\n\n\t\t\tElegir opcion: ";
                cin>>op;
                if(op=="1"){
                    //Registros
                    system("cls");
                    string nombre, genero, contacto, cargo;
                    int edad, piso, num;
                    Personal_administracion admin;
                    for(int i=0;i<10;i++){
                        if(admins[i].getCargo()==""){
                            num=i;
                            break;
                        }
                    }
                    if(admins[9].getCargo()!=""){
                        system("cls");
                        cout<<"\n\n\t\tBase de datos del personal de administracion llena, cerrar programa para reiniciar";
                    }else{
                        cout<<"\n\tIngresa los siguientes datos para completar el perfil\n"<<endl;
                        getline(cin,nombre);
                        cout<<"\t\tNombre: ";
                        getline(cin,nombre);
                        cout<<"\t\tGenero: ";cin>>genero;
                        cout<<"\t\tEdad: ";cin>>edad;
                        getline(cin,contacto);
                        cout<<"\t\tContacto: ";
                        getline(cin,contacto);
                        cout<<"\t\tCargo: ";
                        getline(cin,cargo);
                        cout<<"\t\tPiso: ";cin>>piso;
                        Personal_administracion admin(nombre, genero, edad, contacto, cargo, piso);
                        admins[num]=admin;
                        cout<<"\n\tPulse una tecla para regresar";
                        system("pause>pausaHospital");
                        system("cls");
                    }
                }else if(op=="2"){
                    //Ver registros
                    system("cls");
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
                    cout<<"\n\t\t\t\t\t\tOpcion invalida, prueba de nuevo"<<endl;
                    Sleep(800);
                    system("cls");
                }
            }

        }else if(op=="5"){ //Opcion Personal de transporte
            system("cls");
            while(true){
                cout<<"\n";
                titulo("Personal de transporte");
                cout<<"\n\n\t\t\t1) Registrar\n\t\t\t2) Ver registros\n\t\t\t3) Regresar al menu principal\n\n\t\t\tElegir opcion: ";
                cin>>op;
                if(op=="1"){
                    //Registros
                    system("cls");
                    string nombre, genero, contacto, vehiculo_asignado, licencia;
                    int edad, anios_exp, num;
                    Personal_transporte transp;
                    for(int i=0;i<10;i++){
                        if(transportes[i].getLicencia()==""){
                            num=i;
                            break;
                        }
                    }
                    if(transportes[9].getLicencia()!=""){
                        system("cls");
                        cout<<"\n\n\t\tBase de datos del personal de transporte llena, cerrar programa para reiniciar";
                    }else{
                        cout<<"\n\tIngresa los siguientes datos para completar el perfil\n"<<endl;
                        getline(cin,nombre);
                        cout<<"\t\tNombre: ";
                        getline(cin,nombre);
                        cout<<"\t\tGenero: ";cin>>genero;
                        cout<<"\t\tEdad: ";cin>>edad;
                        getline(cin,contacto);
                        cout<<"\t\tContacto: ";
                        getline(cin,contacto);
                        cout<<"\t\tVehiculo Asignado: ";
                        getline(cin,vehiculo_asignado);
                        cout<<"\t\tTipo de licencia: ";
                        getline(cin,licencia);
                        cout<<"\t\tAnios de experiencia: ";cin>>anios_exp;
                        Personal_transporte transp(nombre, genero, edad, contacto, vehiculo_asignado, licencia, anios_exp);
                        transportes[num]=transp;
                        cout<<"\n\tPulse una tecla para regresar";
                        system("pause>pausaHospital");
                        system("cls");
                    }
                }else if(op=="2"){
                    //Ver registros
                    system("cls");
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
                    cout<<"\n\t\t\t\t\t\tOpcion invalida, prueba de nuevo"<<endl;
                    Sleep(800);
                    system("cls");
                }
            }

        }else if(op=="6"){ //Opcion crear copia de seguridad de la base de datos

            //Llamado de la funcion crear base de datos
            system("cls");

            //Mensaje de finalizacion y guardado exitoso
            cout<<"\n";
            titulo("Copia de seguridad creada");
            guardarArchivo(pacientes, admins, limpiezas, transportes, medicos);
            cout<<"\n\n\t\t\tPulse una tecla para regresar";
            system("pause>pausaHospital");
            system("cls");

        }else if(op=="7"){ //Salir del programa
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
            titulo("Hasta luego");
            break;

        }else{ //Mensaje cuando la opcion es invalida
            cout<<"\n\t\t\t\t\t\tOpcion invalida, prueba de nuevo"<<endl;
            Sleep(800);
            system("cls");
        }
    }
    return 0;
}
