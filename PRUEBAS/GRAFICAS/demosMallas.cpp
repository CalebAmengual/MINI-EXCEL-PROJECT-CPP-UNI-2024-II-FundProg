#include<iostream>
#include"mallas.h"
#include"functmallas.h"
#include"demosMallas.h"

void demoMalla1()
{
    RESULMALLA resultados = pedirMalla();
    genMalla1(resultados.filas, resultados.columnas, resultados.caracter);
}

void demoMalla2()
{
    genMalla2(9,9,16);
}