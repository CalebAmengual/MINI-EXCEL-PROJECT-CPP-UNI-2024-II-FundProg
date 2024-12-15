#include<iostream>
#include<cctype>
#include<string>
#include<cmath>
#include"tipos.h"
#include"operadores.h"
#include"celda.h"
#include"funciones.h"

using namespace std;

bool esNombreDeCelda(const string &cad)
{
    int estado = 0;

    for (char c : cad) {
        switch (estado) {
            case 0:
                if (isalpha(c)) {
                    estado = 1;
                } else {
                    return false;
                }
                break;
            case 1:
                if (isalpha(c)) {
                    estado = 1;
                } else if (isdigit(c)) {
                    estado = 2;
                } else {
                    return false;
                }
                break;
            case 2:
                if (isdigit(c)) {
                    estado = 2;
                } else {
                    return false;
                }
                break;
        }
    }
    return (estado == 2);
}

POSICIONESMATRIZ convertirCeldaAMatriz(const string &celda)
{
    POSICIONESMATRIZ coordenadas;
    int fila = 0;
    int columna = 0;
    size_t i = 0;

    // Procesar las letras para obtener la columna
    while (i < celda.size() && isalpha(celda[i])) {
        columna = columna * 26 + (toupper(celda[i]) - 'A' + 1);
        i++;
    }

    // Procesar los números para obtener la fila
    while (i < celda.size() && isdigit(celda[i])) {
        fila = fila * 10 + (celda[i] - '0');
        i++;
    }

    // Ajustar índices para que empiecen en 0
    coordenadas.pos[1] = fila - 1;
    coordenadas.pos[2] = columna - 1;
    return coordenadas;
}

string convertirMatrizACelda(int fila, int columna)
{
    string celda = "";
    columna++;
    int resto;

    while (columna > 0) {
        resto = (columna - 1) % 26;
        celda = char(resto + 'A') + celda;
        columna = (columna - 1) / 26;
    }

    celda += to_string(fila + 1);

    return celda;
}

bool existeOperador(const string &cad)
{
    string strOPERADORES[6] = {"=", "+", "-", "*", "/", "sen"};

    for (const std::string& operador : strOPERADORES) {
        if (cad.find(operador) != string::npos) {
            return true;
        }
    }
    return false;
}

CAD_OBJETIVO buscarCadenaObj(string)
{

}

string operarCadena(string)
{

}

double evaluar(string)
{

}
