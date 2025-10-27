/*
			Universidad de las fuerzas Armadas Espe 
Nombre: Ruben Bustos                          Periodo: Octubre - Febrero
Asignaura: Estructura De Datos                Nrc: 28436
Fecha: 13/10/2025

tema: Trabajo en Clase "USO DE PLANTILLAS EN C++"
*/
#include<iostream>
using namespace std;

//Plantilla genérica para Obtener el Valor Mayor
template <typename T>
T mayor (T a, T b){
	return (a > b) ? a : b;
}

//Programa Principal
int main(){
	float precio1 = 15.75;
	float precio2 = 20.50;
	unsigned int stock1 = 30;
	unsigned int stock2 = 45;
	
	cout << "Precio mayor: " << mayor(precio1, precio2) << endl;
	cout << "Stock mayor: " << mayor(stock1, stock2) << endl;
	
	return 0;
}
