#include <iostram>
using namespace std;

class Factorail{
	public:
		int calcularFactorial(int n, resultado = 1){
			if(n ==0){
				return resultado; // caso base
			}else{
				return calcularFactorial(n - 1, n * resultado); //Tail recursion
			}
		}
};

int main(){
	Factorial factorial;
	int numero;
	cout << "Ingrese un numero para calcular su FACTORIAL: ";	
	cin >> numero;
	cout << "Factorial de " << numero << ": "
		 << factorial.calularFactorial(numero) << endl;

	return 0;
}
