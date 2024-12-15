#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

#include<iostream>
#include"tipos.h"
#include"operadores.h"
#include"celda.h"

using namespace std;

bool esCelda(string);

POSICIONESMATRIZ convertirCeldaAMatriz(string);

string convertirMatrizACelda(POSICIONESMATRIZ);

bool existeOperador(string);

CAD_OBJETIVO buscarCadenaObj(string);

string operarCadena(string);

double evaluar(string);
#endif //__FUNCIONES_H__