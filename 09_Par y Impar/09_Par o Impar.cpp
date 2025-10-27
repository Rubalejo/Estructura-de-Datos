#include <iostream>
using namespace std;

class SecuenciaParImpar{
	public:
		void generarSecuencia(int n){
			if (n > 0){
				cout << n << " ";
				if (n % 2 == 1){
					generarSecuencia(n/2); // casi recursivo para Pares
				}else{
					generarSecuencia(3* n +1); //Casi recursividad para Impartes
				}
			}
		}
};
int main(){
	SecuebnciaParImpar spi;
	cout << "Secuencia para 7: " << endl;
	spi.generarSecuencia(4);
	cout << endl;
	return 0;
}
