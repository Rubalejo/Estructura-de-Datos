/*
			Universidad de las fuerzas Armadas Espe
            
            		
            
Nombre: Ruben Bustos                          Periodo: Octubre - Febrero
Asignaura: Estructura De Datos                Nrc: 28436
Fecha: 08/10/2025

tema: Realizar un programa que guarde el nombre, ciudad y edad de 3 personas usando un arreglo en donde cada elementos
 una estructura y posteriormente muestre los datos de casa persona en una linea.
*/

#include <iostream>
using namespace std;

int main(){
	struct persona {
    	char nombre [15];
    	int edad;
    	char cuidad [15];
	};
	struct persona p[3];
	for (int i=0;i<=2;i++){
		cout<<"Ingrese el nombre "<<i+1<<endl;
		gets(p[i].nombre);
		cout<<"Ingrese la edad de "<<p[i].nombre<<endl;
		cin>>p[i].edad;
		fflush(stdin);
		cout<<"Ingrese la cuidad de "<<p[i].nombre<<endl;
		gets(p[i].cuidad);
	}
	for (int i=0;i<=2;i++){
		cout<<p[i].nombre<<" tiene "<<p[i].edad<<" y vive en "<<p[i].cuidad<<endl;
	}
	return 0;
	
}
