/*
			Universidad de las fuerzas Armadas Espe
            
            		
            
Nombre: Ruben Bustos                          Periodo: Octubre - Febrero
Asignaura: Estructura De Datos                Nrc: 28436
Fecha: 10/10/2025

tema: Tipos de Datos Abstractos (TDA)
*/

#include <iostream>
#include <string>
using namespace std;

//DEFINICIÓN DEL TDA ALUMNO (TIPO ABSTRACTO DE DATOS)

class Alumno{
	private:
		//Valores (Estados Internos)
		string nombre;
		string cedula;
		int edad;
		string carrera;
		
	public:
		//Constructor: Inicializa los atributos (operacion de inserción/inicialización
		void crearAlumno(string n, string c, int e, string car){
			if (e <=0 || c.empty()){
				cout << "Error: Datos Invalidos al crear el Alumno. "<<endl;
				return;
			}
			nombre = n;
			cedula = c;
			edad = e;
			carrera = car;
		}
		
		//Operación de consulta: Muestra la Información (Operación de Busqueda)
		void mostrar(){
			cout << "---------------------------------------" <<endl;
			cout << "Nombre:   " << nombre << endl;
			cout << "Cedula:   " << cedula << endl;
			cout << "Edad:	   " << edad << endl;
			cout << "Carrera:  " << carrera << endl;
			cout << "---------------------------------------" << endl;
		}
		//Operación de modificación: Actualiza un valor existente (Actualización com...)
		void actualizarEdad(int nuevaEdad){
			if (nuevaEdad > 0)
				edad = nuevaEdad;
			else
				cout << "Error: Edad Invalida." << endl;
		}
};

// Programa Principal para probar el TDA ALUMNO 

int main(){
	Alumno a1; //Delaramos un objeto del TDA Alumno
	
	//1. Inicialización (Crear un Alumno)
	a1.crearAlumno("Maria Lopez", "0104567890", 20, "Ingeniera en Sistema");
	
	//2. Consulta (Mostrar los Datos)
	cout << "Alumno Registrado: " << endl;
	a1.mostrar();
	
	//3. Modificación (Actualizar la Edad)
	cout << "Actualización Edad..." << endl;
	a1.actualizarEdad(21);
	
	//4. Consulta posterior (Comprobar Cambios)
	cout <<"Datos Despues de la Actualización:" << endl;
	a1.mostrar();
	
	return 0;
}
