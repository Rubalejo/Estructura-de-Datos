/*
			Universidad de las fuerzas Armadas Espe 
Nombre: Ruben Bustos                          Periodo: Octubre - Febrero
Asignaura: Estructura De Datos                Nrc: 28436
Fecha: 13/10/2025

tema: Trabajo en Clase "USO DE TYPEDEF EN C++"
*/
#include <iostream>
#include <string>
using namespace std;

//Definición de Alias con TypeDef
typedef unsigned int CodigoProducto;
typedef string NombreProducto;
typedef string Categoria;
typedef float Precio;
typedef unsigned int Cantidad;

//Definición del TDA Producto
struct Producto{
	CodigoProducto codigo;
	NombreProducto nombre;
	Categoria categoria;
	Precio precio;
	Cantidad stock;
};

//Función para Mostrar información de un producto
void mostrarProductos(const Producto& p){
	cout << "Codigo:" << p.codigo << endl;
	cout << "Nombre:" << p.nombre << endl;
	cout << "Categoria" << p.categoria << endl;
	cout << "Precio: $" <<p.precio << endl;
	cout << "Stock:" << p.stock << "unidades" << endl;
	
}

//Pragrama Principal
int main(){
	Producto prod1 = {1001, "Laptop Lenovo", "Computadoras", 749.99,25};
	mostrarProductos(prod1);
	return 0;
	
}
