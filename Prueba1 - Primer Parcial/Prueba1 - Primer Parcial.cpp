/*
          Universidad de las Fuerzas Armadas ESPE
     				Carrera de Software
Nombre: Rubén Bustos                                  Periodo: Octubre - Marzo
NRC: 28436                                            Fecha: 22/10/2025
Tema: Corrección Prueba Primer Parcial.               Forma: B

Enunciado: El programa en C++ debe simular un sistema de control de cursos usando TDA para representar entidades como “Curso”.
Debe incluir alias de tipo con typedef o using, y plantillas (templates) para manejar colecciones genéricas. Además, debe 
sobrecargar al menos dos operadores (como != y <<) y mostrar una salida clara y funcional.
*/

#include <iostream>
#include <string>
using namespace std;

// Alias de tipo
typedef string Aula;        // Aquí va el NRC o número de aula
typedef string Alumno;      // Nombre del estudiante
typedef string Asignatura;  // Nombre de la materia

// Ingreso de Plantilla [Clase Publica y Clase Privada] 
template <typename T>
class Coleccion {
private:
    T elementos[30];
    int cantidad;

public:
    Coleccion() {
        cantidad = 0;
    }

    void insertar(const T& elemento) {
        if (cantidad < 30) {
            elementos[cantidad++] = elemento;
        } else {
            cout << "Haz llegado al límite!" << endl;
        }
    }

    void listar() {
        cout << "\nBienvenido al Programa de la Universidad de las Fuerzas Armadas ESPE\n" << endl;
        cout << "            SISTEMA DE CONTROL DE CURSOS            \n" << endl;
        for (int i = 0; i < cantidad; i++) {
            cout << elementos[i] << endl;
        }
        cout << "----------------------------------------------------" << endl;
    }
};

// Ingreso de las clases a compañadas de los datos 
class Curso {
private:
    Aula nrc;
    Alumno nombreAlumno;
    Asignatura materia;

public:
    // Método para ingresar datos
    void ingresar(Aula a, Alumno n, Asignatura m) {
        if (a.empty() || n.empty() || m.empty()) {
            cout << "Error. Datos inválidos." << endl;
            return;
        }
        nrc = a;
        nombreAlumno = n;
        materia = m;
    }

    // Método para mostrar la información
    void mostrar() const {
        cout << "NRC: " << nrc << endl;
        cout << "Alumno: " << nombreAlumno << endl;
        cout << "Asignatura: " << materia << endl;
        cout << "---------------------------------------------" << endl;
    }

    // Validación
    bool esValido() const {
        return !nrc.empty() && !nombreAlumno.empty() && !materia.empty();
    }

    // Sobrecarga
    bool operator!=(const Curso& otro) const {
        return nrc != otro.nrc || materia != otro.materia || nombreAlumno != otro.nombreAlumno;
    }

    // Sobrecarga del operador [ostream / operator]
    friend ostream& operator<<(ostream& os, const Curso& c) {
        os << "NRC: " << c.nrc
           << " | Alumno: " << c.nombreAlumno
           << " | Asignatura: " << c.materia;
        return os;
    }
};

//PROGRAMA PRINCIPAL
int main() {
    Curso aula1, aula2;

    aula1.ingresar("C28436", "Ruben Bustos", "Estructura de Datos\n");
    aula2.ingresar("H56989", "Alejandro Viteri", "Desarrollo Web\n");

    Coleccion<Curso> lista;
    lista.insertar(aula1);
    lista.insertar(aula2);
    lista.listar();

    // Validaciónes de las clases si Existe disponibilidad.
    cout << "\n¿Los cursos son diferentes? \n";
    if (aula1 != aula2)
        cout << "Si " << endl;
    else
        cout << "No " << endl;

    return 0;
}
