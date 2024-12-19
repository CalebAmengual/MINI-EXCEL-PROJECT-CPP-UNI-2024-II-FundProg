#include <iostream>
#include <string>
#include "mallas.h"
#include "functmallas.h"

using namespace std;

// Prototipos de las funciones
void mostrarMenu();
void escribirEnCelda(string **, Tam, Tam);
void mostrarContenidoCelda(string **, Tam, Tam);


int main() {
    // 
    Tam filas = 4, columnas = 4, ancho = 10;
    string **matriz = new string *[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new string[columnas];
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = " ";
        }
    }

    int opcion = 0;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                escribirEnCelda(matriz, filas, columnas);
                break;
            case 2:
                mostrarContenidoCelda(matriz, filas, columnas);
                break;
            case 3:
                genMalla3(filas, columnas, ancho, matriz);
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);

    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}

// Función para mostrar el menú principal
void mostrarMenu() {
    cout << "\n--- Menu Interactivo ---\n";
    cout << "1. Escribir en una celda\n";
    cout << "2. Mostrar contenido de una celda\n";
    cout << "3. Mostrar malla completa\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opción: ";
}

// Función para escribir en una celda
void escribirEnCelda(string **matriz, Tam filas, Tam columnas) {
    Tam fila, columna;
    string valor;
    cout << "Ingrese el número de fila (0 a " << filas - 1 << "): ";
    cin >> fila;
    cout << "Ingrese el número de columna (0 a " << columnas - 1 << "): ";
    cin >> columna;

    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        cout << "Ingrese el valor para la celda: ";
        cin >> valor;
        matriz[fila][columna] = valor;
    } else {
        cout << "Coordenadas fuera de rango." << endl;
    }
}

// Función para mostrar el contenido de una celda
void mostrarContenidoCelda(string **matriz, Tam filas, Tam columnas) {
    Tam fila, columna;
    cout << "Ingrese el número de fila (0 a " << filas - 1 << "): ";
    cin >> fila;
    cout << "Ingrese el número de columna (0 a " << columnas - 1 << "): ";
    cin >> columna;

    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        cout << "Contenido de la celda [" << fila << "][" << columna << "]: " 
             << matriz[fila][columna] << endl;
    } else {
        cout << "Coordenadas fuera de rango." << endl;
    }
}
