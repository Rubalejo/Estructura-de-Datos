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

//DEFINICI�N DEL TDA ALUMNO (TIPO ABSTRACTO DE DATOS)

class Alumno{
	private:
		//Valores (Estados Internos)
		string nombre;
		string cedula;
		int edad;
		string carrera;
		
	public:
		//Constructor: Inicializa los atributos (operacion de inserci�n/inicializaci�n
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
		
		//Operaci�n de consulta: Muestra la Informaci�n (Operaci�n de Busqueda)
		void mostrar(){
			cout << "---------------------------------------" <<endl;
			cout << "Nombre:   " << nombre << endl;
			cout << "Cedula:   " << cedula << endl;
			cout << "Edad:	   " << edad << endl;
			cout << "Carrera:  " << carrera << endl;
			cout << "---------------------------------------" << endl;
		}
		//Operaci�n de modificaci�n: Actualiza un valor existente (Actualizaci�n com...)
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
	
	//1. Inicializaci�n (Crear un Alumno)
	a1.crearAlumno("Maria Lopez", "0104567890", 20, "Ingeniera en Sistema");
	
	//2. Consulta (Mostrar los Datos)
	cout << "Alumno Registrado: " << endl;
	a1.mostrar();
	
	//3. Modificaci�n (Actualizar la Edad)
	cout << "Actualizaci�n Edad..." << endl;
	a1.actualizarEdad(21);
	
	//4. Consulta posterior (Comprobar Cambios)
	cout <<"Datos Despues de la Actualizaci�n:" << endl;
	a1.mostrar();
	
	return 0;
}
