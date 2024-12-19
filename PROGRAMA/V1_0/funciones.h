#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

#include<iostream>
#include"tipos.h"
#include"celda.h"
#include"operadores.h"

using namespace std;

bool esNombreDeCelda(const string&);

POSICIONESMATRIZ convertirCeldaAMatriz(const string&);

string convertirMatrizACelda(POSICIONESMATRIZ);

bool existeOperador(const string&);

CAD_OBJETIVO buscarCadenaObj(const string&);

double evaluar(string, CELDA**);
void actualizarCelda(const string , CELDA **);

#endif //__FUNCIONES_H__