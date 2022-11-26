# Gestión de Hospital


## Contexto

La administración y gestión de personal dentro un hospital es sumamente importante para llevar un control de que pacientes entran y salen de las instalaciones, así como de los médicos que operan dentro de este. Incluyendo también al personal que se encarga de la sanitización y/o esterilización, transporte y administración. Esta problemática puede ser solucionada con un sistema similar a una base de datos. El objetivo de este sistema es lograr mantener un control de información adecuado dentro de un hospital. Esto a partir del ingreso de datos de los distintos tipos de usuarios existentes. Logrando almacenar y gestionar la información de las personas, de modo que cuando sea requerida la información pueda ser obtenida de manera eficiente. 
 
Ejemplo de esto al suceder cualquier imprevisto, ya sea que le haya ocurrido algo a un paciente o se deba sancionar a una persona por incumplimiento de alguna norma, se puede contactar de manera inmediata a la persona encargada de lo sucedido. Así mismo es importante tener una copia de seguridad de la información que se recibe, por lo tanto, se dispondrá de una función para guardar lo ingresado en un archivo. La cual se podrá visualizar en un futuro si es requerido.


## Explicación

Este programa será realizado a partir de C++, donde se podrá ingresar usuarios como: pacientes, médicos, personal de transporte, de limpieza y de administración. Los cuales se les podrá ingresar información y posteriormente se podrá visualizar está dentro de cada sección de los usuarios en un apartado de registros. De manera más específica para todos las personas se podrá ingresar y visualizar su nombre, edad, género, y contacto. En el caso del personal de limpieza y administración: su cargo y/o posición y ubicación dentro del hospital, para los médicos además de los datos principales, encontraremos: especialidad, cargo, años de experiencia, cédula y en el caso de tener pacientes asignados se muestran quienes son. En el caso de personal de transporte contienen información como: tipo de licencia, años de experiencia y vehículo asignado y por último para pacientes se tiene información como: enfermedad, cuarto, seguro médico y id. Esto con la finalidad de mejorar la gestión y administración del personal dentro de un hospital. Incluyendo la funcionalidad para realizar copias de seguridad, por medio de guardar los datos e información en un archivo de manera manual. 


## Instrucciones
<ol>
 <li>Debes descargar todos los archivos contenidos en la carpeta Gestion_Hospital_Codigo</li>
 <li>Una vez descargados los archivos debes de verificar si tienes instalado el compilador de g++ de lo contrario no será posible ejecutar el programa <br><i>Nota: Si no se cuentas con el compilador ir al siguiente link y seguir los pasos del <a href="https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/">tutorial</a> para descargar g++</i> <br>https://www.freecodecamp.org/news/how-to-install-c-and-cpp-compiler-on-windows/</li>
 <li>Ya que se tenga instalado g++ y los archivos del programa, debes de abrir la consola</li>
 <li>Abierta la consola debes dirigirte a la ruta donde tengas guardado el programa, para esto normalmente la consola se abre en el disco C, si tienes los archivos del programa en otro disco primero se debe de cambiar de disco, para esto se escribe el nombre del disco seguido por dos puntos (ejemplo D:)</li>
 <li>Una vez estando en el disco donde se encuentren los archivos debes escribir cd seguido de la ruta donde se encuentre guardado el programa</li>
 <li>Posteriormente debes de escribir el siguiente comando g++ main.cpp -o main.exe</li>
 <li>Espera a que se genere el archivo .exe</li>
 <li>Por último, escribe en la consola main.exe y se debe abrir el programa</li>
</ol>


## Limitaciones
- La base de datos está limitada a 50 personas
  - 10 usuarios Pacientes
  - 10 usuarios Médicos
  - 10 usuarios del Personal de limpieza
  - 10 usuarios del Personal de transporte
  - 10 usuarios del Personal de administración
- Los Médicos solo pueden tener asignados 3 pacientes
- Es necesario cerrar el programa para borrar los datos de las personas
- No es posible quitarle un paciente ya asignado a un médico, sólo es posible sustituir el paciente por otro
- No es posible eliminar ni editar datos de una persona

